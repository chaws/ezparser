#include <ezast_translation_unit.h>

ezast_translation_unit::ezast_translation_unit()
{
	this->type = TRANSLATION_UNIT;
	this->external_declaration = NULL;
	this->translation_unit = NULL;
}

ezast_translation_unit::~ezast_translation_unit()
{
	ezlog::debug("Destroying ezast_translation_unit");
	
	if(external_declaration)
		delete external_declaration;

	if(translation_unit)
		delete translation_unit;
}
