#include <ezerror.h>

std::vector<std::string> ezerror::messages;

void ezerror::set_msg(int &error_id, std::string msg)
{
	error_id = messages.size();
	messages.push_back(msg);
}

std::string ezerror::get_msg(int error_id)
{
	if(0 < error_id && error_id < messages.size())
		return messages[error_id];
	return "Error: error_id not found!";
}

void ezerror::init_ini()
{
	//TODO: Get where error messages are going to be redirected
}

void ezerror::init_error()
{
	
}

void ezerror::init()
{
	messages.push_back("OK");
	ezerror::init_ini();
	ezerror::init_error();
}
