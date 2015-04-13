#ifndef EZAST_POINTER_H
#define EZAST_POINTER_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: pointer
 */
class ezast_pointer : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_pointer();

	/**
	 *	Frees everything from here
	 */
	~ezast_pointer();

	/**
	 *	Number of pointers (*, **, ***, and so on, wow!)
	 */
	int pointers;

	ezast * type_qualifier_list;
	ezast * pointer;
};

#endif
