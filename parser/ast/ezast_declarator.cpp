#include <ezast_declarator.h>

ezast_declarator::ezast_declarator()
{
	this->type = DECLARATOR;
	this->pointer = NULL;
	this->direct_declarator = NULL;
}

ezast_declarator::~ezast_declarator()
{
	if(this->pointer)
		delete this->pointer;

	if(this->direct_declarator)
		delete this->direct_declarator;
}
