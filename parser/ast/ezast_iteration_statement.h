#ifndef EZAST_ITERATION_STATEMENT_H
#define EZAST_ITERATION_STATEMENT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: iteration_statement
 */
class ezast_iteration_statement : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_iteration_statement();
};

#endif
