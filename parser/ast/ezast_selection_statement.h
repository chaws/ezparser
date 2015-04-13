#ifndef EZAST_SELECTION_STATEMENT_H
#define EZAST_SELECTION_STATEMENT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: selection_statement
 */
class ezast_selection_statement : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_selection_statement();
};

#endif
