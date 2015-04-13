#ifndef EZAST_SPECIFIER_QUALIFIER_LIST_H
#define EZAST_SPECIFIER_QUALIFIER_LIST_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: specifier_qualifier_list
 */
class ezast_specifier_qualifier_list : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_specifier_qualifier_list();
};

#endif
