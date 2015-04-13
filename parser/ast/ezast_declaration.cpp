#include <ezast_declaration.h>

ezast_declaration::ezast_declaration()
{
	this->type = DECLARATION;
	this->declaration_specifiers = NULL;
	this->init_declarator_list = NULL;
	this->static_assert_declaration = NULL;
}

ezast_declaration::~ezast_declaration()
{
	ezlog::debug("Destroying ezast_declaration");
	
	if(declaration_specifiers)
		delete declaration_specifiers;

	if(init_declarator_list)
		delete init_declarator_list;

	if(static_assert_declaration)
		delete static_assert_declaration;
}
