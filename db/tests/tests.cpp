#include <iostream>
#include <string>
#include <ezutil.h>
#include <ezdb.h>

using namespace std;

string schema = "test_schema";
string table = "test_table";
string field = "id integer";
ezdb * db;

void setup()
{
	ezini::init("tests/db.ini");
	ezlog::set_level(ezlog::INFO | ezlog::DEBUG | ezlog::WARN | ezlog::ERROR);

	ezlog::debug("Trying a connection to Postgres");
	db = ezdb::get_instance();
	if(db->is_connected())
		ezlog::debug("Successfully connected =D");
	else
		ezlog::debug("Not connected =(");
}

void test_ezdb_create_schema()
{
	ezlog::debug("Trying to create a schema");
	ezlog::debug("Creating a '"+ schema +"' schema");
	db->exec_sql("CREATE SCHEMA "+ schema +" AUTHORIZATION ezuser;");
}

void test_ezdb_create_table()
{
	ezlog::debug("Trying to create a table");
	ezlog::debug("Creating '"+ table +"' table");
	db->exec_sql("CREATE TABLE "+ schema +"."+ table +" ("+ field +") ;");
}

void test_ezdb_drop_table()
{
	ezlog::debug("Trying to drop a table");
	ezlog::debug("Droping '"+ table +"' table");
	db->exec_sql("DROP TABLE "+ schema +"."+ table +";");
}

void test_ezdb_insert_table()
{
	ezlog::debug("Trying to insert some data to a table");
	ezlog::debug("inserting 0 to '"+ table +"' table");
	db->exec_sql("INSERT INTO "+ schema +"."+ table +" VALUES(0) ;");
	db->exec_sql("INSERT INTO "+ schema +"."+ table +" VALUES(1) ;");
	db->exec_sql("INSERT INTO "+ schema +"."+ table +" VALUES(2) ;");
	db->exec_sql("INSERT INTO "+ schema +"."+ table +" VALUES(3) ;");
	db->exec_sql("INSERT INTO "+ schema +"."+ table +" VALUES(4) ;");
}

void test_ezdb_update_table()
{
	ezlog::debug("Trying to update some data to a table");
	ezlog::debug("Updating 0 to 1 in '"+ table +"' table");
	db->exec_sql("UPDATE "+ schema +"."+ table +" SET id = 1 WHERE id = 0 ;");
}


void test_ezdb_select_table()
{
	ezlog::debug("Trying to update some data to a table");
	ezlog::debug("Updating 0 to 1 in '"+ table +"' table");

	vector< vector<string> > result = db->query_sql("SELECT * FROM "+ schema +"."+ table +" ;");

	for(int i = 0; i < result.size(); i++)
	{
		string tuple = "";
		for(int j = 0; j < result[i].size(); j++)
		{
			tuple += string("'") + result[i][j] + string("', ");
		}
		ezlog::debug(tuple);
	}

}

void test_ezdb_drop_schema()
{
	ezlog::debug("Trying to delete a schema");
	ezlog::debug("Deleting '"+ schema +"' schema");
	db->exec_sql("DROP SCHEMA "+ schema +";");
}

void test_ezdb()
{
	ezlog::debug("Testing ezdb...");

	test_ezdb_create_schema();
	test_ezdb_create_table();
	test_ezdb_insert_table();
	test_ezdb_update_table();
	test_ezdb_select_table();
	test_ezdb_drop_table();
	test_ezdb_drop_schema();

	ezlog::debug("Finished testing ezdb");
}

int main()
{
	ezlog::debug("***** Beginning db/tests *****");

	setup();

	if(db->is_connected())
		test_ezdb();

	ezlog::debug("***** Finishing db/tests *****");
	return 0;
}