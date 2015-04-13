#include <ezast_direct_declarator.h>

ezast_direct_declarator::ezast_direct_declarator()
{
	this->type = DIRECT_DECLARATOR;
	this->IDENTIFIER = NULL;
	this->declarator = NULL;
	this->direct_declarator = NULL;
	this->assignment_expression = NULL;
	this->type_qualifier_list = NULL;
	this->parameter_type_list = NULL;
	this->identifier_list = NULL;
	this->square_brackets = 0;
}

ezast_direct_declarator::~ezast_direct_declarator()
{
	ezlog::debug("Destroying ezast_direct_declarator");
	
	if(IDENTIFIER)
		delete IDENTIFIER;

	if(declarator)
		delete declarator;

	if(direct_declarator)
		delete direct_declarator;

	if(assignment_expression)
		delete assignment_expression;

	if(type_qualifier_list)
		delete type_qualifier_list;

	if(parameter_type_list)
		delete parameter_type_list;

	if(identifier_list)
		delete identifier_list;
}
