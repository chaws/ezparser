#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::init_declarator__declarator_EQ_initializer(ezast * declarator, ezast * initializer)
{
	ezlog::debug("* Calling init_declarator__declarator_EQ_initializer");
	ezast_init_declarator * ast = new ezast_init_declarator;
	ast->declarator = declarator;
	ast->initializer = initializer;
	return ast;
}
