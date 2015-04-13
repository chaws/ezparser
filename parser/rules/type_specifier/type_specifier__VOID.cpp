#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__VOID()
{
	ezlog::debug("* Calling type_specifier__VOID");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _VOID_;
	return ast;
}
