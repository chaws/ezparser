#ifndef EZAST_INITIALIZER_LIST_H
#define EZAST_INITIALIZER_LIST_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: initializer_list
 */
class ezast_initializer_list : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_initializer_list();
};

#endif
