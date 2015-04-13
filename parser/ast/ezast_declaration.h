#ifndef EZAST_DECLARATION_H
#define EZAST_DECLARATION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: declaration
 */
class ezast_declaration : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_declaration();

	/**
	 *	Frees evertything from here
	 */
	~ezast_declaration();

	ezast * declaration_specifiers;
	ezast * init_declarator_list;
	ezast * static_assert_declaration;
};

#endif
