#include <ezrule.h>
#include <iostream>
#include <string>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::direct_declarator__IDENTIFIER(char * identifier)
{
	ezlog::debug("* Calling direct_declarator__IDENTIFIER");
	ezast_IDENTIFIER * id = new ezast_IDENTIFIER;
	id->name = new string(identifier);

	ezlog::debug("IDENTIFIER ['" + *(id->name) + string("'] is at line ") 
		+ to_string(id->location->line)   + string(", column ")
		+ to_string(id->location->column) + string(" and scope ") 
		+ to_string(id->location->scope));

	ezast_direct_declarator * ast = new ezast_direct_declarator;
	ast->IDENTIFIER = id;
	return ast;
}
