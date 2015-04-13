#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__INT()
{
	ezlog::debug("* Calling type_specifier__INT");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _INT_;
	return ast;
}
