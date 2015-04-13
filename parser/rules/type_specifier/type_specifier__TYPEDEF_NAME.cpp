#include <ezrule.h>
#include <iostream>
#include <string>

using namespace std;

// AUTO-GENERATED
ezast * ezrule::type_specifier__TYPEDEF_NAME(char * type_def)
{
	ezlog::debug("* Calling type_specifier__TYPEDEF_NAME");
	ezast_type_specifier * ast = new ezast_type_specifier;
	ast->type_specifier = _TYPEDEF_NAME_;
	ast->typedef_name = new std::string(type_def);
	return ast;
}
