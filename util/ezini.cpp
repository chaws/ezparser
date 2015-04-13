#include <ezini.h>
#include <ezlog.h>
#include <ezerror.h>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using std::string;
using std::map;

map<string, string> ezini::values;
int ezini::error;
int ezini::ERROR_CANNOT_ALLOCATE_MEMORY;
int ezini::ERROR_CANNOT_OPEN_FILE;

void ezini::init(const char * filename)
{
	ezini::init_error();
	string log_msg = "Opening " + string(filename);
	ezlog::debug(log_msg);
    error = ini_parse(filename, value_handler);
    if(error)
    {
    	if(error == ERROR_CANNOT_ALLOCATE_MEMORY || 
    	   error == ERROR_CANNOT_OPEN_FILE)
    	{
    		ezlog::error(error);
    	}
    	else
    	{
    		ezlog::warn("Syntax problem at " + string(filename));
    	}
    }
}

string ezini::get(string section, string name, string default_value)
{
    string key = make_key(section, name);
    return values.count(key) ? values[key] : default_value;
}

int ezini::getint(string section, string name, int default_value)
{
    string valstr = get(section, name, "");
    const char * value = valstr.c_str();
    char * end;
    int n = strtol(value, &end, 0);
    return end > value ? n : default_value;
}

double ezini::getdouble(string section, string name, double default_value)
{
    string valstr = get(section, name, "");
    const char * value = valstr.c_str();
    char * end;
    double n = strtod(value, &end);
    return end > value ? n : default_value;
}

bool ezini::getbool(string section, string name, bool default_value)
{
    string valstr = get(section, name, "");
    std::transform(valstr.begin(), valstr.end(), valstr.begin(), ::tolower);
    if (valstr == "true" || valstr == "yes" || valstr == "on" || valstr == "1")
        return true;
    else if (valstr == "false" || valstr == "no" || valstr == "off" || valstr == "0")
        return false;
    else
        return default_value;
}

string ezini::make_key(string section, string name)
{
    string key = section + "=" + name;
    std::transform(key.begin(), key.end(), key.begin(), ::tolower);
    return key;
}

int ezini::value_handler(const char * section, const char * name, const char * value)
{
    string key = make_key(section, name);
    if (values[key].size() > 0)
        values[key] += "\n";
    values[key] += value;
    return 1;
}

void ezini::init_error()
{
	ezerror::set_msg(ERROR_CANNOT_ALLOCATE_MEMORY, "Can't allocate memory for ezini");
	ezerror::set_msg(ERROR_CANNOT_OPEN_FILE, "Can't open configurarion file");
}

/**
 * Strip whitespace chars off end of given string, in place. Return s. 
 */
static char * rstrip(char* s)
{
    char * p = s + strlen(s);
    while (p > s && isspace((unsigned char)(* --p)))
        *p = '\0';
    return s;
}

/**
 * Return pointer to first non-whitespace char in given string. 
 */
static char * lskip(const char * s)
{
    while(*s && isspace((unsigned char)(*s)))
        s++;
    return (char *)s;
}

/**
 * Return pointer to first char c or ';' comment in given string, or pointer to
 * null at end of string if neither found. ';' must be prefixed by a whitespace
 * character to register as a comment. 
 */
static char * find_char_or_comment(const char * s, char c)
{
    int was_whitespace = 0;
    while(*s && *s != c && !(was_whitespace && *s == ';')) 
    {
        was_whitespace = isspace((unsigned char)(*s));
        s++;
    }
    return (char *)s;
}

/**
 * Version of strncpy that ensures dest (size bytes) is null-terminated. 
 */
static char * strncpy0(char * dest, const char * src, size_t size)
{
    strncpy(dest, src, size);
    dest[size - 1] = '\0';
    return dest;
}

int ini_parse_file(FILE * file, int (* handler)(const char *, const char *, const char *))
{
    /* Uses a fair bit of stack (use heap instead if you need to) */
	#if INI_USE_STACK
	    char line[INI_MAX_LINE];
	#else
	    char * line;
	#endif
	    char section[INI_MAX_SECTION] = "";
	    char prev_name[INI_MAX_NAME] = "";
	    char * start;
	    char * end;
	    char * name;
	    char * value;
	    int lineno = 0;
	    int error = 0;
	#if !INI_USE_STACK
	    line = (char *)malloc(INI_MAX_LINE);
	    if(!line)
	        return ezini::ERROR_CANNOT_ALLOCATE_MEMORY;
	#endif
	    /* Scan through file line by line */
	    while(fgets(line, INI_MAX_LINE, file) != NULL)
	    {
	        lineno++;
	        start = line;
	#if INI_ALLOW_BOM
	        if(lineno == 1 && (unsigned char)start[0] == 0xEF &&
	                           (unsigned char)start[1] == 0xBB &&
	                           (unsigned char)start[2] == 0xBF) 
	        {
	            start += 3;
	        }
	#endif
	        start = lskip(rstrip(start));
	        if(*start == ';' || *start == '#') 
	        {
	            /* Per Python ConfigParser, allow '#' comments at start of line */
	        }
	#if INI_ALLOW_MULTILINE
	        else if(*prev_name && *start && start > line) 
	        {
	            /* Non-black line with leading whitespace, treat as continuation
	               of previous name's value (as per Python ConfigParser). */
	            if (!handler(section, prev_name, start) && !error)
	                error = lineno;
	        }
	#endif
	        else if(*start == '[') 
	        {
	            /* A "[section]" line */
	            end = find_char_or_comment(start + 1, ']');
	            if(*end == ']')
	            {
	                *end = '\0';
	                strncpy0(section, start + 1, sizeof(section));
	                *prev_name = '\0';
	            }
	            else if(!error) 
	            {
	                /* No ']' found on section line */
	                error = lineno;
	            }
	        }
	        else if(*start && *start != ';')
	        {
	            /* Not a comment, must be a name[=:]value pair */
	            end = find_char_or_comment(start, '=');
	            if (*end != '=') 
	            {
	                end = find_char_or_comment(start, ':');
	            }

	            if(*end == '=' || *end == ':') 
	            {
	                *end = '\0';
	                name = rstrip(start);
	                value = lskip(end + 1);
	                end = find_char_or_comment(value, '\0');
	                if (*end == ';')
	                    *end = '\0';
	                rstrip(value);

	                /* Valid name[=:]value pair found, call handler */
	                strncpy0(prev_name, name, sizeof(prev_name));
	                if (!handler(section, name, value) && !error)
	                    error = lineno;
	            }
	            else if(!error)
	            {
	                /* No '=' or ':' found on name[=:]value line */
	                error = lineno;
	            }
	        }

	#if INI_STOP_ON_FIRST_ERROR
	        if (error)
	            break;
	#endif
	    }
	#if !INI_USE_STACK
	    free(line);
	#endif
	    return error;
}

int ini_parse(const char * filename, int (* handler)(const char *, const char *, const char *))
{
    FILE * file;
    int error;

    file = fopen(filename, "r");
    if(!file)
        return ezini::ERROR_CANNOT_OPEN_FILE;

    error = ini_parse_file(file, handler);
    fclose(file);
    return error;
}