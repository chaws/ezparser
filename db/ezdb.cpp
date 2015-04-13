#include <ezdb.h>

ezdb * ezdb::instance = NULL;

ezdb::~ezdb()
{
	if(this->is_connected())
		this->disconnect();
}

void ezdb::init()
{
	// TODO: connect to the database and try out some queries
	ezdb::init_ini();
	ezdb::init_error();
}

void ezdb::init_ini()
{
	this->host 	 	= ezini::get("ezdb", "host");
	this->port 	 	= ezini::get("ezdb", "port");
	this->database 	= ezini::get("ezdb", "database");
	this->user 	 	= ezini::get("ezdb", "user");
	this->password 	= ezini::get("ezdb", "password");

	ezlog::debug("ezdb.host = " + this->host);
	ezlog::debug("ezdb.port = " + this->port);
	ezlog::debug("ezdb.database = " + this->database);
	ezlog::debug("ezdb.user = " + this->user);
	ezlog::debug("ezdb.password = " + this->password);
}

void ezdb::init_error()
{

}

void ezdb::connect()
{
	if(ezdb::is_connected())
		return;

	std::string conn_str;
	conn_str.append("dbname=").append(this->database);
	conn_str.append(" user=").append(this->user);
	conn_str.append(" password=").append(this->password);
	conn_str.append(" hostaddr=").append(this->host);
	conn_str.append(" port=").append(this->port);

	this->connection = PQconnectdb(conn_str.c_str());
	if(PQstatus(this->connection) == CONNECTION_BAD) 
        ezlog::log(ezlog::ERROR, "Couldn't connect to database " + std::string(PQerrorMessage(this->connection)));
	else
		ezlog::info("Database connection OK");
}

void ezdb::disconnect()
{
	if(this->is_connected())
	{
		PQfinish(this->connection);
		ezlog::info("Desconnecting from database OK");	
	}
	else
		ezlog::warn("The database was already disconnected!");	
}

bool ezdb::is_connected()
{
	return (PQstatus(this->connection) == CONNECTION_OK);
}

void ezdb::exec_sql(std::string sql)
{
	// TODO: take care of SQL injections
	ezlog::debug("Executing sql '" + sql + "'");

	if(!this->is_connected())
	{
		ezlog::log(ezlog::ERROR, "Couldn't execute '" + sql + "' database not connected!");
		return;
	}

	PGresult * res = PQexec(this->connection, sql.c_str());
	if (PQresultStatus(res) != PGRES_COMMAND_OK) 
		ezlog::warn("Something went wrong with the last sql statement: " + string(PQerrorMessage(this->connection)));
}

vector< vector<string> > ezdb::query_sql(string sql)
{
	PGresult * res;
	int num_fields;

	vector< vector<string> > resultset;

	// Start a transaction in order to use cursor
	res = PQexec(this->connection, "BEGIN");
	if (PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		ezlog::warn("Failed to query: " + string(PQerrorMessage(this->connection)));
		PQclear(res);
		return resultset;
	}

	PQclear(res);

	// Creates a cursor to walk through the resultset
	res = PQexec(this->connection, string(string("DECLARE mycursor CURSOR FOR ") + sql).c_str());
	if (PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		ezlog::warn("Failed to query: " + string(PQerrorMessage(this->connection)));
		PQclear(res);
		res = PQexec(this->connection, "END");
		PQclear(res);
		return resultset;
	}

	// avoid memory leak
	PQclear(res);

	res = PQexec(this->connection, "FETCH ALL in mycursor");
	if (PQresultStatus(res) != PGRES_TUPLES_OK)
	{
		ezlog::warn("Failed to query: " + string(PQerrorMessage(this->connection)));
		PQclear(res);
		res = PQexec(this->connection, "END");
		PQclear(res);
		return resultset;
	}

	vector<string> columns;
	num_fields = PQnfields(res);
	for(int i_field = 0; i_field < num_fields; i_field++)
	{
		columns.push_back(string(PQfname(res, i_field)));
	}

	// The first typle contains column names
	resultset.push_back(columns);

	// The rest of the rows will contain queried results
	for(int i_tuple = 0; i_tuple < PQntuples(res); i_tuple++)
	{
		vector<string> tuple;
		for(int i_field = 0; i_field < num_fields; i_field++)
		{
			tuple.push_back(string(PQgetvalue(res, i_tuple, i_field)));
		}
		resultset.push_back(tuple);
	}

	PQclear(res);

	// Close the current cursor and free the memory
	res = PQexec(this->connection, "CLOSE mycursor");
	PQclear(res);
	
	res = PQexec(this->connection, "END");
	PQclear(res);

	return resultset;
}

ezdb * ezdb::get_instance()
{
	if(ezdb::instance)
		return ezdb::instance;
	ezdb::instance = new ezdb;
	ezdb::instance->init();
	ezdb::instance->connect();
	return ezdb::instance;
}
