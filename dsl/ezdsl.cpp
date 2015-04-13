#include <ezdsl.h>

void ezdsl::init()
{

}

void ezdsl::init_error()
{

}

string * ezdsl::to_sql(string& dsl)
{
	if(dsl.find("INSERT") != string::npos || dsl.find("UPDATE") != string::npos || 
	   dsl.find("DROP") != string::npos || dsl.find("ALTER")  != string::npos)
	{
		ezlog::warn("Please, don't try to mess with the database structure");
		return NULL;
	}

	// TODO: when time is available, implement a decent DSL for code querying, like CQL or .QL
	// at this time, we'll assume the dsl is already the sql, so we just return it
	return &dsl;
}