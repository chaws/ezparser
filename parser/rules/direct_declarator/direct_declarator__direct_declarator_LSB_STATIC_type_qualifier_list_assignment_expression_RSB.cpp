#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::direct_declarator__direct_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB(ezast * direct_declarator, ezast * type_qualifier_list, ezast * assignment_expression)
{
	ezlog::debug("* Calling direct_declarator__direct_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB");
	ezast_direct_declarator * ast = new ezast_direct_declarator;
	ast->direct_declarator = direct_declarator;
	ast->type_qualifier_list = type_qualifier_list;
	ast->assignment_expression = assignment_expression;
	return ast;
}
