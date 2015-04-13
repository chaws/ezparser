#include <iostream>

using namespace std;

class A
{
public:
	int type;
	int lala;

	A()
	{
		cout << "Calling A" << endl;
		this->type = 0;
		this->lala = 5;
	}

	~A()
	{
		cout << "Destroying A" << endl;
	}

};

class B : public A
{
public:
	int another;
	B()
	{
		cout << "Calling B" << endl;
		this->type = 2;
		this->another = 3;
	}

	~B()
	{
		cout << "Destroying B" << endl;
	}
};

A * function()
{
	B * b = new B;
	return b;
}

int main()
{
	A * a = function();
	cout << "Type = " << a->type << endl;
	B * b = (B *)a;
	cout << "Type = " << b->type << endl;
	cout << "Another = " << b->another << endl;

	A * new_b = new B;
	cout << "b->lala = " << b->lala << endl;
	delete new_b;

	return 0;
}