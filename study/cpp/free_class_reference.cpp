#include <iostream>

using namespace std;

class Teste
{
public:
	Teste()
	{
		cout << "Creating teste" << endl;
	}

	~Teste()
	{
		cout << "Destroying teste" << endl;
	}
};

int main()
{
	Teste * t = new Teste;
	delete t;


	return 0;
}