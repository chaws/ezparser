#include <ezeval.h>

// AUTO-GENERATED
void * ezeval::eval_declaration_specifiers(ezast_declaration_specifiers * ast, void * args)
{
	ezlog::debug("Evaluating declaration_specifiers");

	if(ast->storage_class_specifier)
		this->eval(ast->storage_class_specifier);

	if(ast->declaration_specifiers)
		this->eval(ast->declaration_specifiers);

	if(ast->type_specifier)
		this->eval(ast->type_specifier);

	if(ast->type_qualifier)
		this->eval(ast->type_qualifier);

	if(ast->function_specifier)
		this->eval(ast->function_specifier);

	if(ast->alignment_specifier)
		this->eval(ast->alignment_specifier);

	return (void *)0;
}
