#include <ezeval.h>

// AUTO-GENERATED
void * ezeval::eval_init_declarator(ezast_init_declarator * ast, void * args)
{
	ezlog::debug("Evaluating init_declarator");

	if(ast->declarator)
		this->eval(ast->declarator);

	if(ast->initializer)
		this->eval(ast->initializer);

	return (void *)0;
}
