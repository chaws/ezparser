#ifndef EZERROR_H
#define EZERROR_H

#include <vector>
#include <string>
#include <ez.h>

/**
 *	Stores every possible error messages for ezparser code
 *	This strategy keeps an error_id id and stores all the messages
 *	the difference now is that ezerror is the one distribuiting error_id ids
 */
class ezerror : public ez 
{
private:

	/**
	 * Stores all messages
	 */
	static std::vector<std::string> messages;

public:

	/**
	 *	Defines an id for error messages
	 */
	static void set_msg(int &error_id, std::string msg);

	/**
	 *	Returns an erro message
	 */
	static std::string get_msg(int error_id);

	/**
	 *	Initializes configuration for ezini
	 */
	static void init_ini();

	/**
	 *	Initializes configuration for ezerror
	 */
	static void init_error();

	/**
	 *	Initialize class
	 */
	static void init();
};

#endif
