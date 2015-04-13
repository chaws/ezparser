#ifndef EZAST_TRANSLATION_UNIT_H
#define EZAST_TRANSLATION_UNIT_H

#include <ezast.h>

/**
 *	Define a subclass of ezast: translation_unit
 */
class ezast_translation_unit : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_translation_unit();

	/**
	 *	Frees everything from here
	 */
	~ezast_translation_unit();

	ezast * external_declaration;
	ezast * translation_unit;
};

#endif
