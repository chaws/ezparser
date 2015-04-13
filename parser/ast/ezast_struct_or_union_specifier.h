#ifndef EZAST_STRUCT_OR_UNION_SPECIFIER_H
#define EZAST_STRUCT_OR_UNION_SPECIFIER_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: struct_or_union_specifier
 */
class ezast_struct_or_union_specifier : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_struct_or_union_specifier();
};

#endif
