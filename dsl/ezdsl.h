#ifndef EZDSL_H
#define EZDSL_H

#include <ez.h>
#include <ezutil.h>
#include <string>

using namespace std;

class ezdsl : public ez
{
public:

	/**
	 *	Initialize general stuff for ezopt
	 */
	void init();

	/**
	 *	Initialize opt settings for errors
	 */
	void init_error();

	/**
	 *	Process command line options
	 */
	string * to_sql(string& dsl);
};

#endif