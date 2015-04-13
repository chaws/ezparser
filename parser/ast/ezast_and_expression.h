#ifndef EZAST_AND_EXPRESSION_H
#define EZAST_AND_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: and_expression
 */
class ezast_and_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_and_expression();
};

#endif
