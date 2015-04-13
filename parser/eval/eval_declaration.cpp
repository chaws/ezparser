#include <ezeval.h>

using namespace std;

// AUTO-GENERATED
void * ezeval::eval_declaration(ezast_declaration * ast, void * args)
{
	ezlog::debug("Evaluating declaration");

	EZENV["is_static"] = string("FALSE");
	EZENV["is_extern"] = string("FALSE");
	EZENV["num_braces"] = string("0");
	EZENV["type_id"] = string("1");

	if(ast->declaration_specifiers)
		this->eval(ast->declaration_specifiers, args);

	if(ast->init_declarator_list)
		this->eval(ast->init_declarator_list, args);

	if(ast->static_assert_declaration)
		this->eval(ast->static_assert_declaration, args);

	return (void *)0;
}
