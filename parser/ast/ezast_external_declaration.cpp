#include <ezast_external_declaration.h>

ezast_external_declaration::ezast_external_declaration()
{
	this->type = EXTERNAL_DECLARATION;
	this->function_definition = NULL;
	this->declaration = NULL;
}

ezast_external_declaration::~ezast_external_declaration()
{
	ezlog::debug("Destroying ezast_external_declaration");
	
	if(function_definition)
		delete function_definition;

	if(declaration)
		delete declaration;
}
