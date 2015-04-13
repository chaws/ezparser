#include <ezast_IDENTIFIER.h>

ezast_IDENTIFIER::ezast_IDENTIFIER()
{
	this->type = _IDENTIFIER;
}


ezast_IDENTIFIER::~ezast_IDENTIFIER()
{
	ezlog::debug("Destroying ezast_IDENTIFIER");
	
	if(name)
		delete name;

	if(location)
		delete location;
}