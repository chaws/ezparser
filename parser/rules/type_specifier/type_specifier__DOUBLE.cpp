#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__DOUBLE()
{
	ezlog::debug("* Calling type_specifier__DOUBLE");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _DOUBLE_;
	return ast;
}
