#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration_specifiers__type_specifier(ezast * type_specifier)
{
	ezlog::debug("* Calling declaration_specifiers__type_specifier");
	ezast_declaration_specifiers * ast = new ezast_declaration_specifiers;
	ast->type_specifier = type_specifier;
	return ast;
}
