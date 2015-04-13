#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::pointer__MULT_pointer(ezast * pointer)
{
	ezlog::debug("* Calling pointer__MULT_pointer");
	ezast_pointer * ast = new ezast_pointer;
	ast->pointers += ((ezast_pointer *)pointer)->pointers;
	ast->pointer = pointer;
	return ast;
}
