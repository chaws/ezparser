#ifndef %classifndef%
#define %classifndef%

#include <ezutil.h>
#include <ezast.h>
#include <stdlib.h>

class %class% : public ez
{
public:
	void init();
	
%methods%
};

#endif