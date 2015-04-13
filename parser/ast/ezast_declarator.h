#ifndef EZAST_DECLARATOR_H
#define EZAST_DECLARATOR_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: declarator
 */
class ezast_declarator : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_declarator();

	/**
	 *	Frees everything from here
	 */
	~ezast_declarator();

	ezast * pointer;
	ezast * direct_declarator;
};

#endif
