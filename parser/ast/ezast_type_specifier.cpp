#include <ezast_type_specifier.h>

ezast_type_specifier::ezast_type_specifier()
{
	this->type = TYPE_SPECIFIER;
	this->type_specifier = _OTHER_;
	this->atomic_type_specifier = NULL;
	this->struct_or_union_specifier = NULL;
	this->enum_specifier = NULL;
	this->typedef_name = NULL;
}

ezast_type_specifier::~ezast_type_specifier()
{
	ezlog::debug("Destroying ezast_type_specifier");
	
	if(atomic_type_specifier)
		delete atomic_type_specifier;

	if(struct_or_union_specifier)
		delete struct_or_union_specifier;

	if(enum_specifier)
		delete enum_specifier;

	if(typedef_name)
		delete typedef_name;
}
