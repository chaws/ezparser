#ifndef EZAST_ASSIGNMENT_EXPRESSION_H
#define EZAST_ASSIGNMENT_EXPRESSION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: assignment_expression
 */
class ezast_assignment_expression : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_assignment_expression();
};

#endif
