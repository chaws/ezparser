#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::pointer__MULT_type_qualifier_list_pointer(ezast * type_qualifier_list, ezast * pointer)
{
	ezlog::debug("* Calling pointer__MULT_type_qualifier_list_pointer");
	ezast_pointer * ast = new ezast_pointer;
	ast->pointers += ((ezast_pointer *)pointer)->pointers;
	ast->pointer = pointer;
	ast->type_qualifier_list = type_qualifier_list;
	return ast;
}
