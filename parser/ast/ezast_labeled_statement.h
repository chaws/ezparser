#ifndef EZAST_LABELED_STATEMENT_H
#define EZAST_LABELED_STATEMENT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: labeled_statement
 */
class ezast_labeled_statement : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_labeled_statement();
};

#endif
