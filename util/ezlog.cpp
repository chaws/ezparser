#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ezlog.h>
#include <ezerror.h>
#include <ezini.h>
#include <ezopt.h>
#include <iostream>

using namespace std;

int ezlog::level = 0;

void ezlog::log(int log_type, const string message)
{
	static string log_type_str;
	char time_str[16];
	static struct timeval micro_time;

	if(!(level & log_type)) // doesn't log if it's not in level
		return;

	switch(log_type)
	{
		case DEBUG: log_type_str = "DEBUG"; break;
		case INFO: 	log_type_str = "INFO "; break;
		case WARN: 	log_type_str = "WARN "; break;
		case ERROR: log_type_str = "ERROR"; break;
	}
	if(!gettimeofday(&micro_time, NULL))
	{ 
        struct tm * tm = localtime(&micro_time.tv_sec);
        sprintf(time_str, "%02d:%02d:%02d:%03ld.%03ld", 
        	tm->tm_hour, tm->tm_min, tm->tm_sec, 
        	(micro_time.tv_usec/1000), (micro_time.tv_usec % 1000));
	}
	else
	{
		time_str[0] = ' ';
	}

	cout << "[" << log_type_str << ": " << time_str << "] " << message << endl;
}

void ezlog::error(int error_id)
{
	ezlog::log(ERROR, ezerror::get_msg(error_id));
}

void ezlog::debug(const string message)
{
	ezlog::log(DEBUG, message);
}

void ezlog::info(const string message)
{
	ezlog::ezlog::log(INFO, message);
}

void ezlog::warn(const string message)
{
	ezlog::log(WARN, message);
}

void ezlog::init()
{
	ezlog::init_ini();
	ezlog::init_error();
}

void ezlog::init_ini()
{
	string log_level = ezini::get("ezlog", "level");
	if(log_level.find("DEBUG") != string::npos) level |= DEBUG;
	if(log_level.find("ERROR") != string::npos) level |= ERROR;
	if(log_level.find("INFO")  != string::npos) level |= INFO;
	if(log_level.find("WARN")  != string::npos) level |= WARN;

}

void ezlog::init_error()
{
	
}

int ezlog::get_level()
{
	return level;
}

void ezlog::set_level(int log_level)
{
	if(0 <= level)
		level = log_level;
}
