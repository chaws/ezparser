#ifndef EZAST_STATIC_ASSERT_DECLARATION_H
#define EZAST_STATIC_ASSERT_DECLARATION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: static_assert_declaration
 */
class ezast_static_assert_declaration : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_static_assert_declaration();
};

#endif
