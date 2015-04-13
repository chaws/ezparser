#ifndef EZAST_LOGICAL_OR_EXPRESSION_H
#define EZAST_LOGICAL_OR_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: logical_or_expression
 */
class ezast_logical_or_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_logical_or_expression();
};

#endif
