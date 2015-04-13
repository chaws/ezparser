#include <ezeval.h>

using namespace std;

// AUTO-GENERATED
void * ezeval::eval_declarator(ezast_declarator * ast, void * args)
{
	ezlog::debug("Evaluating declarator");

	// We need to tell the direct_declarator how many pointers were declared
	int * pointers = new int;
	*pointers = 0;

	if(ast->pointer)
		*pointers += *(int *)this->eval(ast->pointer);

	if(*pointers > 0)
		ezlog::debug("Pointers identified: " + to_string(*pointers));

	if(ast->direct_declarator)
		this->eval(ast->direct_declarator, pointers);

	delete pointers;

	return (void *)0;
}
