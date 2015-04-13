#include <ezeval.h>

// AUTO-GENERATED
void * ezeval::eval_type_specifier(ezast_type_specifier * ast, void * args)
{
	ezlog::debug("Evaluating type_specifier");

	if(ast->type_specifier != _OTHER_)
	{
		// lets save it to the database

		return (void *)0;
	}

	if(ast->atomic_type_specifier)
		this->eval(ast->atomic_type_specifier);

	if(ast->struct_or_union_specifier)
		this->eval(ast->struct_or_union_specifier);

	if(ast->enum_specifier)
		this->eval(ast->enum_specifier);

	return (void *)0;
}
