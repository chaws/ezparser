#ifndef EZAST_STATEMENT_H
#define EZAST_STATEMENT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: statement
 */
class ezast_statement : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_statement();
};

#endif
