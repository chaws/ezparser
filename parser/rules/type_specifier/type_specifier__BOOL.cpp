#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__BOOL()
{
	ezlog::debug("* Calling type_specifier__BOOL");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _BOOL_;
	return ast;
}
