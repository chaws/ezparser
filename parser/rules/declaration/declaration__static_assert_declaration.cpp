#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::declaration__static_assert_declaration(ezast * static_assert_declaration)
{
	ezlog::debug("* Calling declaration__static_assert_declaration");
	ezast_declaration * ast = new ezast_declaration;
	ast->static_assert_declaration = static_assert_declaration;
	return ast;
}
