#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__SHORT()
{
	ezlog::debug("* Calling type_specifier__SHORT");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _SHORT_;
	return ast;
}
