#include <iostream>
#include <string>
#include <ezutil.h>
#include <ezrule.h>

using namespace std;

ezrule * rule;

void setup()
{
	rule = new ezrule;
}


void test_ezrule()
{
	ezlog::debug("Testing ezrule...");

	ezast * ast = rule->direct_declarator__IDENTIFIER("MinhaVar");
	ezlog::debug("This ast must be type _IDENTIFIER, correct? " + (((ezast_direct_declarator *)ast)->IDENTIFIER->type == _IDENTIFIER ? string("true") : string("false")));

	ezlog::debug("Finished testing ezrule");
}

int main()
{
	ezlog::set_level(ezlog::INFO | ezlog::DEBUG | ezlog::WARN | ezlog::ERROR);
	ezlog::debug("***** Beginning ezrule/tests *****");

	setup();
	test_ezrule();

	ezlog::debug("***** Finishing ezrule/tests *****");
	return 0;
}