#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration_specifiers__type_qualifier(ezast * type_qualifier)
{
	ezlog::debug("* Calling declaration_specifiers__type_qualifier");
	ezast_declaration_specifiers * ast = new ezast_declaration_specifiers;
	ast->type_qualifier = type_qualifier;
	return ast;
}
