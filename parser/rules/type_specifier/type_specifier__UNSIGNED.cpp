#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__UNSIGNED()
{
	ezlog::debug("* Calling type_specifier__UNSIGNED");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _UNSIGNED_;
	return ast;
}
