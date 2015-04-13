#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__FLOAT()
{
	ezlog::debug("* Calling type_specifier__FLOAT");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _FLOAT_;
	return ast;
}
