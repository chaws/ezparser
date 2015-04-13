#ifndef EZAST_EXTERNAL_DECLARATION_H
#define EZAST_EXTERNAL_DECLARATION_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: external_declaration
 */
class ezast_external_declaration : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_external_declaration();

	/**
	 *	Frees everything from here
	 */
	~ezast_external_declaration();

	ezast * function_definition;
	ezast * declaration;
};

#endif
