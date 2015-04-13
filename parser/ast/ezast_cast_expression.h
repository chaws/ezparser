#ifndef EZAST_CAST_EXPRESSION_H
#define EZAST_CAST_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: cast_expression
 */
class ezast_cast_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_cast_expression();
};

#endif
