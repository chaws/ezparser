#include <ezast_pointer.h>

ezast_pointer::ezast_pointer()
{
	this->type = POINTER;
	this->type_qualifier_list = NULL;
	this->pointer = NULL;
	this->pointers = 0;
}

ezast_pointer::~ezast_pointer()
{
	if(this->type_qualifier_list)
		delete this->type_qualifier_list;

	if(this->pointer)
		delete this->pointer;
}
