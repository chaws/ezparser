#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declarator__direct_declarator(ezast * direct_declarator)
{
	ezlog::debug("* Calling declarator__direct_declarator");
	ezast_declarator * ast = new ezast_declarator;
	ast->direct_declarator = direct_declarator;
	return ast;
}
