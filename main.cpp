#include <ezparser.h>

int main(int argc, char ** argv)
{
	ezparser easy;
	easy.init();
	easy.run(argc, argv);
	return 0;
}