#include <ezopt.h>
#include <ezlog.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <utility>

using namespace std;

vector<string> ezopt::file_list;

string ezopt::projectname = "";

/**
 *	Given a string, explode it into an array accordingly with the delim char passed
 */
vector<string> explode(string const & s, char delim)
{
    vector<string> result;
    istringstream iss(s);

    for (string token; getline(iss, token, delim); )
    {
        result.push_back(move(token));
    }

    return result;
}

/**
 *	Executes a command and return its stdout
 */
static string exec(char * cmd) 
{
    FILE * pipe = popen(cmd, "r");
    if(!pipe) 
    	return "ERROR";

    char buffer[128];
    string result = "";

    while(!feof(pipe))
    {
    	if(fgets(buffer, 128, pipe) != NULL)
    		result += buffer;
    }

    pclose(pipe);
    return result;
}

/**
 *	Check for valid filename
 */
static bool file_exist(char * filename)
{
	if(FILE * file = fopen(filename, "r")) 
	{
        fclose(file);
        return true;
    } 
    else 
    {
        return false;
    }   
}

void ezopt::init()
{
	// TODO:
}

void ezopt::init_error()
{
	// TODO:
}

int ezopt::process_opt(int argc, char ** argv)
{
	int c, ok;
	bool passed_dir, passed_file, passed_project;
	char * filename, * dirname;

	ok = 0; // if it remains 0, everything's fine
	passed_dir = passed_file = passed_project = false;
	opterr = 0;
	while((c = getopt(argc, argv, "d:p:f:")) != -1)
	{
		switch(c)
		{
			case 'd':
				passed_dir = true;
				dirname = optarg;
				break;

			case 'f':
				passed_file = true;
				filename = optarg;
				break;

			case 'p':
				passed_project = true;
				ezopt::projectname = string(optarg);
				break;

			case '?':
				if(optopt == 'd')
				{
					ezlog::warn("Please provide a dirname when passing 'd' argument!");
					ok = 1;
				}
				else if(optopt == 'f')
				{
					ezlog::log(ezlog::ERROR, "Please provide a filename when passing 'f' argument!");
					ok = 1;
				}
				else if(optopt == 'p')
				{
					ezlog::log(ezlog::ERROR, "Please provide a project name!");
					ok = 1;
				}
				else if(isprint(optopt))
					ezlog::warn("Unknown option " + string(1, (char)optopt));
				else
					ezlog::warn("Unknown option character " + string(1, (char)optopt));

				break;

			default:
				ezlog::warn("Unknown option " + string(1, (char)optopt));
				return 1;
		}
	}

	for(int i = optind; i < argc; i++)
		ezlog::warn("Non-option argument " + string(argv[i]));

	if(!passed_project)
	{
		ezlog::log(ezlog::ERROR, "Please, provide the project name followed or not by a filename or dirname");
		ezlog::log(ezlog::ERROR, "Usage: ezparser -p <project name> [-f <filename> | -d <dirname>]");
		return 1;
	}

	if(passed_file)
	{
		ezlog::debug("The file passed is '" + string(filename) + "'");
		if(file_exist(filename))
		{
			ezopt::file_list.push_back(string(filename));
		}
		else
		{
			ezlog::log(ezlog::ERROR, "The specified file was not found!");
			ok = 1;
		}
	}

	if(passed_dir)
	{
		ezlog::debug("The dir passed is '" + string(dirname) + "'");

		if(file_exist(dirname))
		{
			string files = exec(strdup((string("find ") + string(dirname) + string(" -name *.c")).c_str()));
			auto list = explode(files, '\n');

			for(int i = 0; i < list.size(); i++)
			{
				ezopt::file_list.push_back(list[i]);
			}
		}
		else
		{
			ezlog::log(ezlog::ERROR, "The specified directory was not found!");
			ok = 1;
		}
	}
	ezlog::debug("The project name is '" + string(ezopt::projectname) + "'");

	return ok;
}