#include <ezeval.h>

using namespace std;

// AUTO-GENERATED
void * ezeval::eval_external_declaration(ezast_external_declaration * ast, void * args)
{
	ezlog::debug("Evaluating external_declaration");

	EZENV["is_function"] = string("FALSE");

	if(ast->function_definition)
	{
		this->eval(ast->function_definition);
		EZENV["is_function"] = string("TRUE");
	}

	if(ast->declaration)
		this->eval(ast->declaration);

	return (void *)0;
}
