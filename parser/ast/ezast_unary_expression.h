#ifndef EZAST_UNARY_EXPRESSION_H
#define EZAST_UNARY_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: unary_expression
 */
class ezast_unary_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_unary_expression();
};

#endif
