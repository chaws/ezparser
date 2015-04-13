#ifndef EZAST_EXPRESSION_STATEMENT_H
#define EZAST_EXPRESSION_STATEMENT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: expression_statement
 */
class ezast_expression_statement : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_expression_statement();
};

#endif
