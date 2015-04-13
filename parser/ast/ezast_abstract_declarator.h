#ifndef EZAST_ABSTRACT_DECLARATOR_H
#define EZAST_ABSTRACT_DECLARATOR_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: abstract_declarator
 */
class ezast_abstract_declarator : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_abstract_declarator();
};

#endif
