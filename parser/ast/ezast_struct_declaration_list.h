#ifndef EZAST_STRUCT_DECLARATION_LIST_H
#define EZAST_STRUCT_DECLARATION_LIST_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: struct_declaration_list
 */
class ezast_struct_declaration_list : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_struct_declaration_list();
};

#endif
