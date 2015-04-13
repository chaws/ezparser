#include <ezeval.h>

using namespace std;

// AUTO-GENERATED
void * ezeval::eval_IDENTIFIER(ezast_IDENTIFIER * ast, void * args)
{
	ezlog::debug("Evaluating IDENTIFIER");

	// Check if there's any pointers in it
	int pointers = 0;
	if(args != NULL)
		pointers += *(int *)args;

	string sql = "INSERT INTO identifier_declaration (name, line, _column, scope, static, extern, function, num_pointers, num_braces, file_id_files, type_id_types) VALUES(";
	sql += string("'") + *ast->name + string("'") + string(", ");
	sql += to_string(ast->location->line) + string(", ");
	sql += to_string(ast->location->column) + string(", ");
	sql += to_string(ast->location->scope) + string(", ");
	sql += EZENV["is_static"] + string(", ");
	sql += EZENV["is_extern"] + string(", ");
	sql += EZENV["is_function"] + string(", ");
	sql += to_string(pointers) + string(", ");
	sql += EZENV["num_braces"] + string(", ");
	sql += EZENV["file_id"] + string(",");
	sql += EZENV["type_id"] + string(");");

	ezdb * db = ezdb::get_instance();
	db->exec_sql(sql);

	ezlog::debug(sql);

	return (void *)0;
}