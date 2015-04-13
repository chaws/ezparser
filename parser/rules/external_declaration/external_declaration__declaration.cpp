#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::external_declaration__declaration(ezast * declaration)
{
	ezlog::debug("* Calling external_declaration__declaration");
	ezast_external_declaration * ast = new ezast_external_declaration;
	ast->declaration = declaration;
	return ast;
}
