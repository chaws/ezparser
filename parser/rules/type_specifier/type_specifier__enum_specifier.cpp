#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__enum_specifier(ezast * enum_specifier)
{
	ezlog::debug("* Calling type_specifier__enum_specifier");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->enum_specifier = enum_specifier;
	return ast;
}
