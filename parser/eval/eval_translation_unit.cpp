#include <ezeval.h>

// AUTO-GENERATED
void * ezeval::eval_translation_unit(ezast_translation_unit * ast, void * args)
{
	ezlog::debug("Evaluating translation_unit");

	if(ast->external_declaration)
		this->eval(ast->external_declaration);

	if(ast->translation_unit)
		this->eval(ast->translation_unit);

	return (void *)0;
}
