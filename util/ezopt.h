#ifndef EZOPT_H
#define EZOPT_H

#include <ez.h>
#include <vector>
#include <string>

using namespace std;

class ezopt : public ez
{
public:

	/**
	 *	List of files to be processed
	 */
	static vector<string> file_list;

	/**
	 *	Keeps project name to be further used
	 */
	static string projectname;

	/**
	 *	Initialize general stuff for ezopt
	 */
	static void init();

	/**
	 *	Initialize opt settings for errors
	 */
	static void init_error();

	/**
	 *	Process command line options
	 */
	static int process_opt(int argc, char ** argv);
};

#endif