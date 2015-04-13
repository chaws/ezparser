#include <ezeval.h>

// AUTO-GENERATED
void * ezeval::eval_pointer(ezast_pointer * ast, void * args)
{
	ezlog::debug("Evaluating pointer");

	if(ast->type_qualifier_list)
		this->eval(ast->type_qualifier_list);

	int * pointers = new int;
	*pointers = ast->pointers;

	if(ast->pointer)
		*pointers += *(int *)this->eval(ast->pointer);

	return pointers;
}
