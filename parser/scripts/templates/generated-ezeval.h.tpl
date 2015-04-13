#ifndef EZEVAL_H
#define EZEVAL_H

#include <ezast.h>
#include <string>

class ezeval
{
public:

	/**
	 *	Evaluates an AST, saving the data into a database
	 */
	void * eval(ezast * ast);

%generated_methods%};

#endif