#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::direct_declarator__direct_declarator_LP_RP(ezast * direct_declarator)
{
	ezlog::debug("* Calling direct_declarator__direct_declarator_LP_RP");
	ezast_direct_declarator * ast = new ezast_direct_declarator;
	ast->direct_declarator = direct_declarator;
	return ast;
}
