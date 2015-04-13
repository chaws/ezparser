#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::direct_declarator__direct_declarator_LP_identifier_list_RP(ezast * direct_declarator, ezast * identifier_list)
{
	ezlog::debug("* Calling direct_declarator__direct_declarator_LP_identifier_list_RP");
	ezast_direct_declarator * ast = new ezast_direct_declarator;
	ast->direct_declarator = direct_declarator;
	ast->identifier_list = identifier_list;
	return ast;
}
