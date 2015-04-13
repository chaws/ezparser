#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::direct_declarator__LP_declarator_RP(ezast * declarator)
{
	ezlog::debug("* Calling direct_declarator__LP_declarator_RP");
	ezast_direct_declarator * ast = new ezast_direct_declarator;
	ast->declarator = declarator;
	return ast;
}
