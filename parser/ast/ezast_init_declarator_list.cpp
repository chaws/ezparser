#include <ezast_init_declarator_list.h>

ezast_init_declarator_list::ezast_init_declarator_list()
{
	this->type = INIT_DECLARATOR_LIST;
	this->init_declarator = NULL;
	this->init_declarator_list = NULL;
}

ezast_init_declarator_list::~ezast_init_declarator_list()
{
	ezlog::debug("Destroying ezast_init_declarator_list");
	
	if(init_declarator)
		delete init_declarator;

	if(init_declarator_list)
		delete init_declarator_list;
}
