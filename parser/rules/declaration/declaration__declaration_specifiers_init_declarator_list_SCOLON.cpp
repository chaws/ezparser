#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration__declaration_specifiers_init_declarator_list_SCOLON(ezast * declaration_specifiers, ezast * init_declarator_list)
{
	ezlog::debug("* Calling declaration__declaration_specifiers_init_declarator_list_SCOLON");
	ezast_declaration * ast = new ezast_declaration;
	ast->declaration_specifiers = declaration_specifiers;
	ast->init_declarator_list = init_declarator_list;
	return ast;
}
