#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__SIGNED()
{
	ezlog::debug("* Calling type_specifier__SIGNED");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _SIGNED_;
	return ast;
}
