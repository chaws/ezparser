#ifndef EZAST_CONDITIONAL_EXPRESSION_H
#define EZAST_CONDITIONAL_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: conditional_expression
 */
class ezast_conditional_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_conditional_expression();
};

#endif
