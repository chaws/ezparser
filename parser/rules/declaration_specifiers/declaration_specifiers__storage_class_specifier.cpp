#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration_specifiers__storage_class_specifier(ezast * storage_class_specifier)
{
	ezlog::debug("* Calling declaration_specifiers__storage_class_specifier");
	ezast_declaration_specifiers * ast = new ezast_declaration_specifiers;
	ast->storage_class_specifier = storage_class_specifier;
	return ast;
}
