#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::init_declarator__declarator(ezast * declarator)
{
	ezlog::debug("* Calling init_declarator__declarator");
	ezast_init_declarator * ast = new ezast_init_declarator;
	ast->declarator = declarator;
	return ast;
}
