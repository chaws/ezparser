#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__COMPLEX()
{
	ezlog::debug("* Calling type_specifier__COMPLEX");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _COMPLEX_;
	return ast;
}
