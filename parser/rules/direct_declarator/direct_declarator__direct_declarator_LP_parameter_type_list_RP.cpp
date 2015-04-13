#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::direct_declarator__direct_declarator_LP_parameter_type_list_RP(ezast * direct_declarator, ezast * parameter_type_list)
{
	ezlog::debug("* Calling direct_declarator__direct_declarator_LP_parameter_type_list_RP");
	ezast_direct_declarator * ast = new ezast_direct_declarator;
	ast->direct_declarator = direct_declarator;
	ast->parameter_type_list = parameter_type_list;
	return ast;
}
