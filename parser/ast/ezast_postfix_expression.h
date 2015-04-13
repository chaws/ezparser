#ifndef EZAST_POSTFIX_EXPRESSION_H
#define EZAST_POSTFIX_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: postfix_expression
 */
class ezast_postfix_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_postfix_expression();
};

#endif
