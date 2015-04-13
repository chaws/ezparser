#ifndef EZAST_COMPOUND_STATEMENT_H
#define EZAST_COMPOUND_STATEMENT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: compound_statement
 */
class ezast_compound_statement : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_compound_statement();

	ezast * block_item_list;
};

#endif
