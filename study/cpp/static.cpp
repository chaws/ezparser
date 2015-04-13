#include <iostream>
#include <string>
using namespace std;
class father
{
public:
	void a()
	{
		cout << "I'm your father" << endl;
	}
};

class son : public father
{
public:
	static int b;
	static void a()
	{
		cout << "I'm your son" << endl;
	}
	void c()
	{
		b = 3;
		cout << "b = " << b << endl;
	}
};
int son::b = 2;

int main()
{
	son s;
	s.c();
	return 0;
}
