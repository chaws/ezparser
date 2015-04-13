#ifndef EZAST_INIT_DECLARATOR_LIST_H
#define EZAST_INIT_DECLARATOR_LIST_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: init_declarator_list
 */
class ezast_init_declarator_list : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_init_declarator_list();

	/**
	 *	Frees everything from here
	 */
	~ezast_init_declarator_list();

	ezast * init_declarator;
	ezast * init_declarator_list;
};

#endif
