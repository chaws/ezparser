#ifndef EZAST_CONSTANT_EXPRESSION_H
#define EZAST_CONSTANT_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: constant_expression
 */
class ezast_constant_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_constant_expression();
};

#endif
