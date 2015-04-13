#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration__declaration_specifiers_SCOLON(ezast * declaration_specifiers)
{
	ezlog::debug("* Calling declaration__declaration_specifiers_SCOLON");
	ezast_declaration * ast = new ezast_declaration;
	ast->declaration_specifiers = declaration_specifiers;
	return ast;
}
