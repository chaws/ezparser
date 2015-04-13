#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__LONG()
{
	ezlog::debug("* Calling type_specifier__LONG");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _LONG_;
	return ast;
}
