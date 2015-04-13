#include <ezast_declaration_specifiers.h>

ezast_declaration_specifiers::ezast_declaration_specifiers()
{
	this->type = DECLARATION_SPECIFIERS;
	this->storage_class_specifier = NULL;
	this->declaration_specifiers = NULL;
	this->type_specifier = NULL;
	this->type_qualifier = NULL;
	this->function_specifier = NULL;
	this->alignment_specifier = NULL;
}

ezast_declaration_specifiers::~ezast_declaration_specifiers()
{
	ezlog::debug("Destroying ezast_declaration_specifiers");
	
	if(storage_class_specifier)
		delete storage_class_specifier;

	if(declaration_specifiers)
		delete declaration_specifiers;

	if(type_specifier)
		delete type_specifier;

	if(type_qualifier)
		delete type_qualifier;

	if(function_specifier)
		delete function_specifier;

	if(alignment_specifier)
		delete alignment_specifier;
}
