#include <iostream>
#include <string>
#include <ezutil.h>
#include <ezcparser.h>
#include <ezrule.h>
#include <ezast.h>
#include <ezeval.h>
#include <stdlib.h>

using namespace std;

// Input
extern FILE * yyin;
extern void yyparse();

ezcparser * parser = new ezcparser;
ezast * root;

void setup()
{
	ezlog::set_level(ezlog::INFO | ezlog::DEBUG | ezlog::WARN | ezlog::ERROR);
}

void test_ezcparser_simple_parsing()
{
	ezlog::debug("Trying to parse");
	root = parser->parse_file(string("tests/file_to_be_parsed.c"));
	ezlog::debug("Done!");
}

void test_ezcparser_simple_eval()
{
	ezlog::debug("Trying to evaluate the previous generated ast");
	ezeval * eval = new ezeval;
	eval->eval(root);
	ezlog::debug("Done!");
}

int main()
{
	setup();
	
	ezlog::debug("***** Beginning parser/tests *****");

	test_ezcparser_simple_parsing();
	//test_ezcparser_simple_eval();

	ezlog::debug("***** Finishing parser/tests *****");
	return 0;
}