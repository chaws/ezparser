#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration_specifiers__alignment_specifier_declaration_specifiers(ezast * alignment_specifier, ezast * declaration_specifiers)
{
	ezlog::debug("* Calling declaration_specifiers__alignment_specifier_declaration_specifiers");
	ezast_declaration_specifiers * ast = new ezast_declaration_specifiers;
	ast->alignment_specifier = alignment_specifier;
	ast->declaration_specifiers = declaration_specifiers;
	return ast;
}
