#ifndef EZAST_RELATIONAL_EXPRESSION_H
#define EZAST_RELATIONAL_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: relational_expression
 */
class ezast_relational_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_relational_expression();
};

#endif
