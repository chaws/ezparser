#ifndef EZAST_PRIMARY_EXPRESSION_H
#define EZAST_PRIMARY_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: primary_expression
 */
class ezast_primary_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_primary_expression();
};

#endif
