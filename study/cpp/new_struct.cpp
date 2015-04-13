#include <iostream>

using namespace std;

struct teste
{
	int a;
	int b;
};

int main()
{
	teste * t = new teste;
	cout << t->a << endl;
	cout << t->b << endl;
	return 0;
}