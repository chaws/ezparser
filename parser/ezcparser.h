#ifndef EZCPARSER_H
#define EZCPARSER_H

#include <ez.h>
#include <ezast.h>
#include <ezutil.h>
#include <string>

class ezcparser : public ez
{
public:

	/**
	 *	Initialize general stuff for ezcparser
	 */
	void init();

	/**
	 *	Initialize items from ini file
	 */
	void init_ini();

	/**
	 *	Initialize errors messages
	 */
	void init_error();

	/**
	 *	Parse the entire file list, returning an array of asts, one for each file
	 */
	ezast * parse_file(std::string filename);
};

#endif
