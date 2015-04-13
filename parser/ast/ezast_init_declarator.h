#ifndef EZAST_INIT_DECLARATOR_H
#define EZAST_INIT_DECLARATOR_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: init_declarator
 */
class ezast_init_declarator : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_init_declarator();

	/**
	 *	Frees everything from here
	 */
	~ezast_init_declarator();

	ezast * declarator;
	ezast * initializer;
};

#endif
