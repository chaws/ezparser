#ifndef EZDB_H
#define EZDB_H

#include <string>
#include <postgresql/libpq-fe.h>
#include <ez.h>
#include <ezutil.h>

using namespace std;

/**
 *	Class responsible for database relationships
 */
class ezdb : public ez
{

private:

	/**
	 *	The only instance of this class
	 */
	static ezdb * instance;

	/**
	 *	Database information to keep a connection
	 */
	PGconn * connection;
	string host;
	string port;
	string database;
	string user;
	string password;

	/**
	 *	Forbids anyone to instantiate this class
	 */
	ezdb(){}

	/**
	 *	Connect to the database
	 */
	void connect();

	/**
	 *	Disconnect the database
	 */
	void disconnect();

public:

	/**
	 *	Disconnect from the database
	 */
	~ezdb();

	/**
	 *	The way to perform singleton
	 */
	static ezdb * get_instance();

	/**
	 *	Initialize general stuff for ezdb
	 */
	void init();

	/**
	 *	Initialize database settings, connection and other stuff
	 */
	void init_ini();

	/**
	 *	Initialize errors messages
	 */
	void init_error();

	/**
	 *	Check whether a database connection is active
	 */
	bool is_connected();

	/**
	 *	Exec a SQL statement
	 */
	void exec_sql(string sql);

	/**
	 *	Query some data using
	 */
	vector< vector<string> > query_sql(string sql);
};

#endif
