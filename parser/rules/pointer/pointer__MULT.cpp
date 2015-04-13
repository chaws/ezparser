#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::pointer__MULT()
{
	ezlog::debug("* Calling pointer__MULT");
	ezast_pointer * ast = new ezast_pointer;
	ast->pointers = 1;
	return ast;
}
