#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__atomic_type_specifier(ezast * atomic_type_specifier)
{
	ezlog::debug("* Calling type_specifier__atomic_type_specifier");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->atomic_type_specifier = atomic_type_specifier;
	return ast;
}
