#ifndef EZAST_STRUCT_DECLARATION_H
#define EZAST_STRUCT_DECLARATION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: struct_declaration
 */
class ezast_struct_declaration : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_struct_declaration();
};

#endif
