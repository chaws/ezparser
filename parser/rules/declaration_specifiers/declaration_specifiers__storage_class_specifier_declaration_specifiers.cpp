#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration_specifiers__storage_class_specifier_declaration_specifiers(ezast * storage_class_specifier, ezast * declaration_specifiers)
{
	ezlog::debug("* Calling declaration_specifiers__storage_class_specifier_declaration_specifiers");
	ezast_declaration_specifiers * ast = new ezast_declaration_specifiers;
	ast->storage_class_specifier = storage_class_specifier;
	ast->declaration_specifiers = declaration_specifiers;
	return ast;
}
