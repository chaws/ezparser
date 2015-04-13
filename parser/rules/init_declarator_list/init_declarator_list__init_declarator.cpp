#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::init_declarator_list__init_declarator(ezast * init_declarator)
{
	ezlog::debug("* Calling init_declarator_list__init_declarator");
	ezast_init_declarator_list * ast = new ezast_init_declarator_list;
	ast->init_declarator = init_declarator;
	return ast;
}
