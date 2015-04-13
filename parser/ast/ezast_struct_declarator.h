#ifndef EZAST_STRUCT_DECLARATOR_H
#define EZAST_STRUCT_DECLARATOR_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: struct_declarator
 */
class ezast_struct_declarator : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_struct_declarator();
};

#endif
