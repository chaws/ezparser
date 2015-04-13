#include <ezcparser.h>
#include <ezrule.h>
#include <ezdb.h>
#include <stdlib.h>

using namespace std;

// Necessary global variables to parse a file with flex and bison
extern FILE * yyin;
extern void yyparse();

ezrule * rule = new ezrule;
ezast * ast_root = NULL;

void ezcparser::init()
{
	// TODO: initialize buffers and parsers
	ezcparser::init_ini();
	ezcparser::init_error();
}

void ezcparser::init_ini()
{
	ezlog::debug("Initializing ezcparser");
}

void ezcparser::init_error()
{

}

ezast * ezcparser::parse_file(string filename)
{
	FILE * input = fopen(filename.c_str(), "r");
	if(!input){
		ezlog::warn("Couldn't open file: '" + filename + string("'"));
		return NULL;  
	}

	// Set the current file_id, so other classes get to know it
	EZENV["current_parsing_filename"] = filename;
	ezlog::debug(EZENV["current_parsing_filename"]);

	ezdb * db = ezdb::get_instance();
	db->exec_sql("INSERT INTO files (name) VALUES('" + EZENV["current_parsing_filename"] + string("')"));
	vector< vector<string> > file_id = db->query_sql("SELECT file_id FROM files WHERE name = '" + EZENV["current_parsing_filename"] + string("' LIMIT 1"));
	EZENV["file_id"] = file_id[1][0];


	// Let bison and ezrule take care of building the ast
	yyin = input;
	do
	{
		yyparse();
	}while(!feof(yyin));

	fclose(input);

	// ast_root is set by ezrule at the end of the parsing, if it's null, something happened
	if(!ast_root)
	{
		ezlog::warn("Couldn't find ast_root, check log messages above for more detail");
		return NULL; 
	}

	return ast_root;
}
