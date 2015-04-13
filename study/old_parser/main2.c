#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <iostream>
#include <CRules.h>

// Input
extern FILE * yyin;
extern int yylineno;
extern void yyparse();

// Rules manager
CRules * crule;

using namespace std;

int main(int argc, char ** argv)
{
	if(argc < 2)
	{
		cout << "ezparser: no input files" << endl;
		return -1;
	}

	FILE * input = fopen(argv[1], "r");
	if(!input){
		cout << "Ops, no file!" << endl;
		return -2;  
	}

	cout << "Initializing" << endl;
	// Init CRules
	crule = new CRules();

	yyin = input;

	do
	{
		yyparse();
	}while(!feof(yyin));

	return 0;
}

/*
void yyerror(char *s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "%d: error: ", yylineno);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}
*/