#include <ezeval.h>

using namespace std;

// AUTO-GENERATED
void * ezeval::eval_storage_class_specifier(ezast_storage_class_specifier * ast, void * args)
{
	ezlog::debug("Evaluating storage_class_specifier");

	if(ast->storagetype == _EXTERN_)
		EZENV["is_extern"] = string("TRUE");
	else if(ast->storagetype == _STATIC_)
		EZENV["is_static"] = string("TRUE");

	return (void *)0;
}
