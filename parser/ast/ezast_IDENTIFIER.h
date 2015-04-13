#ifndef EZAST_IDENTIFIER_H
#define EZAST_IDENTIFIER_H

#include <ezast.h>
#include <string>

/**
 *	Define a subclass of ezast: unary_operator
 */
class ezast_IDENTIFIER : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_IDENTIFIER();

	/**
	 *	Destructor, free everything else
	 */
	~ezast_IDENTIFIER();

	/**
	 *	This identifier string value
	 */
	std::string * name;
};

#endif
