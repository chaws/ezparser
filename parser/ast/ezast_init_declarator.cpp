#include <ezast_init_declarator.h>

ezast_init_declarator::ezast_init_declarator()
{
	this->type = INIT_DECLARATOR;
	this->declarator = NULL;
	this->initializer = NULL;
}

ezast_init_declarator::~ezast_init_declarator()
{
	ezlog::debug("Destroying ezast_init_declarator");

	if(declarator)
		delete declarator;

	if(initializer)
		delete initializer;	
}
