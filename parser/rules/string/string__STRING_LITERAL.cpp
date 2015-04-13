#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::string__STRING_LITERAL(char * string_literal)
{
	ezlog::debug("Calling string__STRING_LITERAL");
	ezlog::debug("Constant string: " + string(string_literal));
	return NULL;
}
