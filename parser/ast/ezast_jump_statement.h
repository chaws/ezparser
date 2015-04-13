#ifndef EZAST_JUMP_STATEMENT_H
#define EZAST_JUMP_STATEMENT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: jump_statement
 */
class ezast_jump_statement : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_jump_statement();
};

#endif
