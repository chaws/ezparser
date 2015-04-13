#include <ezparser.h>
#include <iostream>
#include <vector>
#include <string>

static void show_help()
{
	cout << "ezparser 0.0.1 - Code Query Tool" << endl;
	cout << "Currently there are not many commands:" << endl;
	cout << " - help: display this help message" << endl;
	cout << " - exit: quits the program" << endl;
	cout << " - <sql statements>: SQL used to directly query postgresql data" << endl;
}

ezparser::ezparser()
{
	ezlog::debug("Creating ezparser object...");
}

ezparser::~ezparser()
{
	ezlog::debug("Destroying ezparser...");
}

int ezparser::run(int argc, char ** argv)
{
	ezlog::debug("Running ezparser...");
	if(ezopt::process_opt(argc, argv) != 0)
	{
		ezlog::log(ezlog::ERROR, "Could not run ezparser, command line arguments are wrong!");
		return 1;
	}

	ezdb * db;
	ezdsl * dsl;
	ezeval * evaluator;
	ezcparser * parser;
	string cmd, * sql;


	if(!ezparser::project_exist(ezopt::projectname))
	{
		parser = new ezcparser;
		evaluator = new ezeval;

		ezlog::info("New project, parsing all " + to_string(ezopt::file_list.size()) + " files");

		// Parse one file at a time, so we don't suck all the memory out of the system
		for(int i_file = 0; i_file < ezopt::file_list.size(); i_file++)
		{
			ezast * ast = parser->parse_file(ezopt::file_list[i_file]);
			if(!ast)
			{
				ezlog::log(ezlog::ERROR, "Something went wrong during the parsing phase, see detailed messages above");
				return 1;
			}

			if(evaluator->eval(ast) != NULL)
			{
				ezlog::log(ezlog::ERROR, "Something went wrong during the evaluation phase, see detailed messages above");
				return 1;
			}
		}
	}

	show_help();

	db = ezdb::get_instance();
	dsl = new ezdsl;

	cout << "ez> ";
	while(getline(cin, cmd))
	{
		//cout << "ez> ";

		if(cmd == "exit")
			break;
		if(cmd == "help")
		{
			show_help();
			cout << "ez> ";
			continue;
		}

		if(cmd.size() == 0)
		{
			cout << "ez> ";
			continue;
		}

		sql = dsl->to_sql(cmd);
		if(!sql)
		{
			ezlog::log(ezlog::ERROR, "Something went wrong while querying, see detailed messages above");
			cout << "ez> ";
			continue;
		}

		vector< vector<string> > result = db->query_sql(*sql);

		for(int i = 0; i < result.size(); i++)
		{
			string tuple = "";
			for(int j = 0; j < result[i].size(); j++)
			{
				tuple += string("'") + result[i][j] + string("', ");
			}
			cout << tuple << endl;
		}
		cout << "ez> ";
	}

	cout << endl;

	return 0;
}

void ezparser::init()
{
	ezlog::debug("Initializing ezparser object...");
	ezparser::init_ini();
	ezparser::init_error();

	// Initialize useful classes
	ezini::init("ezparser.ini");
	ezlog::init();
	//ezlog::set_level(ezlog::INFO | ezlog::WARN | ezlog::ERROR);
	ezerror::init();
}

void ezparser::exit(int rc)
{
	ezlog::info("Saving project contents...");
	if(rc != 0)
	{
		ezlog::log(ezlog::ERROR, "Something went wrong during ezparser run");
		ezlog::log(ezlog::ERROR, "exiting with error = " + rc);
	}
}

void ezparser::init_ini()
{

}

void ezparser::init_error()
{

}

bool ezparser::project_exist(std::string projectname)
{
	return false;
}
