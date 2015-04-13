#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::translation_unit__translation_unit_external_declaration(ezast * translation_unit, ezast * external_declaration)
{
	ezlog::debug("* Calling translation_unit__translation_unit_external_declaration");
	ezast_translation_unit * ast = new ezast_translation_unit;
	ast->translation_unit = translation_unit;
	ast->external_declaration = external_declaration;
	ast_root = ast;
	return ast;
}
