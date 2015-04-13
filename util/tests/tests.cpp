#include <iostream>
#include <unistd.h>
#include <ezutil.h>

using namespace std;

void setup()
{
	ezerror::init();
	ezini::init("tests/tests.ini");
	ezlog::init();
}

void test_ezlog()
{
	cout << "Testing ezlog..." << endl;

	cout << "Log level 0: " << endl;
	ezlog::log(ezlog::INFO, "Testing info log");
	ezlog::log(ezlog::DEBUG, "Testing debug log");
	ezlog::log(ezlog::WARN, "Testing warning log");
	ezlog::log(ezlog::ERROR, "Testing error log"); 
	cout << endl;

	cout << "Log level for INFO only" << endl;
	ezlog::set_level(ezlog::INFO);
	ezlog::log(ezlog::INFO, "Testing info log");
	ezlog::log(ezlog::DEBUG, "Testing debug log");
	ezlog::log(ezlog::WARN, "Testing warning log");
	ezlog::log(ezlog::ERROR, "Testing error log"); 
	cout << endl;

	cout << "Log level for all " << endl;
	ezlog::set_level(ezlog::INFO | ezlog::DEBUG | ezlog::WARN | ezlog::ERROR);
	ezlog::log(ezlog::INFO, "Testing info log");
	ezlog::log(ezlog::DEBUG, "Testing debug log");
	ezlog::log(ezlog::WARN, "Testing warning log");
	ezlog::log(ezlog::ERROR, "Testing error log"); 
	cout << endl ;

	cout << "Finished testing ezlog" << endl << endl;
}

void test_ezini()
{
	cout << "Testing ezini..." << endl;

	string prot_version = ezini::get("protocol", "version");
	string name = ezini::get("user", "name");
	string email = ezini::get("user", "email");
	string active = ezini::get("user", "active");
	string pi = ezini::get("user", "pi");

	cout << "Protocol version: " << prot_version << endl;
	cout << "Name: " << name << endl;
	cout << "Email: " << email << endl;
	cout << "Active: " << active << endl;
	cout << "Pi: " << pi << endl;

	cout << "Finished testing ezini..." << endl << endl;
}

void test_ezerror()
{
	cout << "Testing ezerror..." << endl;

	int err1, err2, err3;
	string msg1, msg2, msg3;

	msg1 = "msg 1";
	msg2 = "msg 2";
	msg3 = "msg 3";

	ezerror::set_msg(err1, msg1);
	ezerror::set_msg(err2, msg2);
	ezerror::set_msg(err3, msg3);

	cout << "Error msg 1: " << ezerror::get_msg(err1) << endl;
	cout << "Error msg 2: " << ezerror::get_msg(err2) << endl;
	cout << "Error msg 3: " << ezerror::get_msg(err3) << endl;
	 
	cout << "Finished testing ezerror" << endl << endl;
}

int main()
{
	cout << "***** Beginning util/tests *****" << endl;

	setup();
	test_ezlog();
	test_ezini();
	test_ezerror();

	cout << "***** Finishing util/tests *****" << endl;
}