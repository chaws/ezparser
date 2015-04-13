#include <ezeval.h>

// AUTO-GENERATED
void * ezeval::eval_init_declarator_list(ezast_init_declarator_list * ast, void * args)
{
	ezlog::debug("Evaluating init_declarator_list");

	if(ast->init_declarator)
		this->eval(ast->init_declarator);

	if(ast->init_declarator_list)
		this->eval(ast->init_declarator_list);

	return (void *)0;
}
