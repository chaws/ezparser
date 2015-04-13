#include <ezeval.h>

// AUTO-GENERATED
void * ezeval::eval_direct_declarator(ezast_direct_declarator * ast, void * args)
{
	ezlog::debug("Evaluating direct_declarator");

	if(ast->IDENTIFIER)
		this->eval(ast->IDENTIFIER, args);

	if(ast->declarator)
		this->eval(ast->declarator);

	if(ast->direct_declarator)
		this->eval(ast->direct_declarator);

	if(ast->assignment_expression)
		this->eval(ast->assignment_expression);

	if(ast->type_qualifier_list)
		this->eval(ast->type_qualifier_list);

	if(ast->parameter_type_list)
		this->eval(ast->parameter_type_list);

	if(ast->identifier_list)
		this->eval(ast->identifier_list);

	return (void *)0;
}
