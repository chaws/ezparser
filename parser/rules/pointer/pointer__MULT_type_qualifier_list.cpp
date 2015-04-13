#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::pointer__MULT_type_qualifier_list(ezast * type_qualifier_list)
{
	ezlog::debug("* Calling pointer__MULT_type_qualifier_list");
	ezast_pointer * ast = new ezast_pointer;
	ast->pointers = 1;
	ast->type_qualifier_list = type_qualifier_list;
	return ast;
}
