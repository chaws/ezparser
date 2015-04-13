#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declarator__pointer_direct_declarator(ezast * pointer, ezast * direct_declarator)
{
	ezlog::debug("* Calling declarator__pointer_direct_declarator");
	ezast_declarator * ast = new ezast_declarator;
	ast->direct_declarator = direct_declarator;
	ast->pointer = pointer;
	return ast;
}
