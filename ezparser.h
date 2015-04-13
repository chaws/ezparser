#ifndef EZPARSER_H
#define EZPARSER_H

#include <string>
#include <ez.h>
#include <ezdb.h> // Database iteractions
#include <ezdsl.h> // Database iteractions
#include <ezcparser.h> // Parse a C source code
#include <ezeval.h> // Parse a C source code
#include <ezutil.h> // Log, error control, ini etc

// TODO: implement this two new features when time is something abundant
// #include <ezdsl.h> // Interpret new language other than SQL
// #include <ezwatchdog.h> // Watch files for changes

using namespace std;

/**
 *	Control everything (at a high level) of ezparser
 */
class ezparser : public ez
{
public:

	/**
	 *	Project name
	 */
	string project_name;

	ezparser();
	~ezparser();

	/**
	 *	Ezparser's main method
	 */
	int run(int argc, char ** argv);

	/**
	 *	Initialize general stuff for ezparser
	 */
	static void init();

	/**
	 *	Exits ezparser
	 *	Takes a return control 
	 */
	static void exit(int rc);

	/**
	 *	Initialize files to be parsed, or database to be connected
	 */
	static void init_ini();

	/**
	 *	Initialize errors messages
	 */
	static void init_error();

	/**
	 *	Project exist?
	 */
	static bool project_exist(string projectname);
};

#endif
