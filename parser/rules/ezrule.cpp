#include <ezrule.h>
#include <ezutil.h>

void ezrule::init()
{
	ezlog::debug("Initializing ezrules...");
}

// Initializing line and column number, gotta repeat it for every file
int __current_line = 1;
int __current_column = 0;
int __current_scope = 0;