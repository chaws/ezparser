#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration_specifiers__alignment_specifier(ezast * alignment_specifier)
{
	ezlog::debug("* Calling declaration_specifiers__alignment_specifier");
	ezast_declaration_specifiers * ast = new ezast_declaration_specifiers;
	ast->alignment_specifier = alignment_specifier;
	return ast;
}
