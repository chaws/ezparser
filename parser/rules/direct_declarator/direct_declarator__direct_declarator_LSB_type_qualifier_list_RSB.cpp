#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::direct_declarator__direct_declarator_LSB_type_qualifier_list_RSB(ezast * direct_declarator, ezast * type_qualifier_list)
{
	ezlog::debug("* Calling direct_declarator__direct_declarator_LSB_type_qualifier_list_RSB");
	ezast_direct_declarator * ast = new ezast_direct_declarator;
	ast->direct_declarator = direct_declarator;
	ast->type_qualifier_list = type_qualifier_list;
	return ast;
}
