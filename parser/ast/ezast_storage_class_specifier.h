#ifndef EZAST_STORAGE_CLASS_SPECIFIER_H
#define EZAST_STORAGE_CLASS_SPECIFIER_H

#include <ezast.h>

enum ezstoragetype
{
	_TYPEDEF_,
	_EXTERN_,
	_STATIC_,
	_THREAD_LOCAL_,
	_AUTO_,
	_REGISTER_
};

/**
 *	Define a subclass of ezast: storage_class_specifier
 */
class ezast_storage_class_specifier : public ezast
{
public:

	/**
	 *	Constructor, just set up this ast type
	 */
	ezast_storage_class_specifier();

	ezstoragetype storagetype;
};

#endif
