#ifndef EZAST_STRUCT_DECLARATOR_LIST_H
#define EZAST_STRUCT_DECLARATOR_LIST_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: struct_declarator_list
 */
class ezast_struct_declarator_list : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_struct_declarator_list();
};

#endif
