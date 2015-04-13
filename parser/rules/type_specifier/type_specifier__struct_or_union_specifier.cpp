#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__struct_or_union_specifier(ezast * struct_or_union_specifier)
{
	ezlog::debug("* Calling type_specifier__struct_or_union_specifier");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->struct_or_union_specifier = struct_or_union_specifier;
	return ast;
}
