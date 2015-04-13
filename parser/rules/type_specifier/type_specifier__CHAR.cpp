#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__CHAR()
{
	ezlog::debug("* Calling type_specifier__CHAR");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _CHAR_;
	return ast;
}
