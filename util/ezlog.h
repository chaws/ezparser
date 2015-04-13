#ifndef EZLOG_H
#define EZLOG_H

#include <string>
#include <ez.h>

using namespace std;

class ezlog : public ez
{
private:

	/**
	 * Log level to print out
	 */
	static int level;

public:

	/**
	 * TYPES OF LOG
	 */
	static const int DEBUG = 0x1;
	static const int INFO = 0x10;
	static const int WARN = 0x100;
	static const int ERROR = 0x1000;

	/**
	 *	Logs a message
	 */
	static void log(int log_type, string message);

	/**
	 *	Logs an error message from its id
	 *	NOTE: it searchs error_id at ezerror class
	 */
	static void error(int error_id);

	/**
	 *	Logs a debug
	 */
	static void debug(const string message);

	/**
	 *	Logs a info
	 */
	static void info(const string message);

	/**
	 *	Logs a warn
	 */
	static void warn(const string message);

	/**
	 *	Initialize general stuff for ezlog
	 */
	static void init();

	/**
	 *	Initialize log settings such as log level
	 */
	static void init_ini();

	/**
	 *	Initialize log settings for errors
	 */
	static void init_error();

	/**
	 *	Returns the log level
	 */
	static int get_level();

	/**
	 *	Sets the log level
	 */
	static void set_level(int log_level);
};

#endif
