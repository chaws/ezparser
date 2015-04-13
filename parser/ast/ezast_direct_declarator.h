#ifndef EZAST_DIRECT_DECLARATOR_H
#define EZAST_DIRECT_DECLARATOR_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: direct_declarator
 */
class ezast_direct_declarator : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_direct_declarator();

	/**
	 *	Frees everything from here
	 */
	~ezast_direct_declarator();

	/**
	 *	Number of Square brackets
	 */
	int square_brackets;

	ezast * IDENTIFIER;
	ezast * declarator;
	ezast * direct_declarator;
	ezast * assignment_expression;
	ezast * type_qualifier_list;
	ezast * parameter_type_list;
	ezast * identifier_list;
};

#endif
