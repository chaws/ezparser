#ifndef EZAST_ATOMIC_TYPE_SPECIFIER_H
#define EZAST_ATOMIC_TYPE_SPECIFIER_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: atomic_type_specifier
 */
class ezast_atomic_type_specifier : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_atomic_type_specifier();
};

#endif
