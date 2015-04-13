#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration_specifiers__function_specifier(ezast * function_specifier)
{
	ezlog::debug("* Calling declaration_specifiers__function_specifier");
	ezast_declaration_specifiers * ast = new ezast_declaration_specifiers;
	ast->function_specifier = function_specifier;
	return ast;
}
