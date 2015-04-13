#include <ezrule.h>
#include <iostream>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::storage_class_specifier__EXTERN()
{
	ezlog::debug("* Calling storage_class_specifier__EXTERN");
	ezast_storage_class_specifier * ast = new ezast_storage_class_specifier;
	ast->storagetype = _EXTERN_;
	return ast;
}
