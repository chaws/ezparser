#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::storage_class_specifier__STATIC()
{
	ezlog::debug("* Calling storage_class_specifier__STATIC");
	ezast_storage_class_specifier * ast = new ezast_storage_class_specifier;
	ast->storagetype = _STATIC_;
	return ast;
}
