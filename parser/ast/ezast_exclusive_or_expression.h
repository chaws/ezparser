#ifndef EZAST_EXCLUSIVE_OR_EXPRESSION_H
#define EZAST_EXCLUSIVE_OR_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: exclusive_or_expression
 */
class ezast_exclusive_or_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_exclusive_or_expression();
};

#endif
