#ifndef EZAST_TYPE_SPECIFIER_H
#define EZAST_TYPE_SPECIFIER_H

#include <ezast.h>
#include <string>

enum eztypespecifier
{
	_VOID_,
	_CHAR_,
	_SHORT_,
	_INT_,
	_LONG_,
	_FLOAT_,
	_DOUBLE_,
	_SIGNED_,
	_UNSIGNED_,
	_BOOL_,
	_COMPLEX_,
	_IMAGINARY_,
	_TYPEDEF_NAME_,
	_OTHER_
};

/**
 *	Define a subclass of ezast: type_specifier
 */
class ezast_type_specifier : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_type_specifier();

	/**
	 *	Frees everything from here
	 */
	~ezast_type_specifier();

	eztypespecifier type_specifier;
	ezast * atomic_type_specifier;
	ezast * struct_or_union_specifier;
	ezast * enum_specifier;

	/**
	 *	When the type specifier is TYPEDEF_NAME, we gotta store the name
	 */
	std::string * typedef_name;
};

#endif
