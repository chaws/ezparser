#ifndef EZAST_DECLARATION_SPECIFIERS_H
#define EZAST_DECLARATION_SPECIFIERS_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: declaration_specifiers
 */
class ezast_declaration_specifiers : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_declaration_specifiers();

	/**
	 *	Frees everything from here
	 */
	~ezast_declaration_specifiers();

	ezast * storage_class_specifier;
	ezast * declaration_specifiers;
	ezast * type_specifier;
	ezast * type_qualifier;
	ezast * function_specifier;
	ezast * alignment_specifier;
};

#endif
