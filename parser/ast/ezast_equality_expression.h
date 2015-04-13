#ifndef EZAST_EQUALITY_EXPRESSION_H
#define EZAST_EQUALITY_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: equality_expression
 */
class ezast_equality_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_equality_expression();
};

#endif
