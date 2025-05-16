#include <iostream>
#include <array>

using namespace std;

class Base
{
public:
	Base(){} ;
	virtual ~Base() { Test(); };

	virtual void Test() { cout << "Base Test" << endl; }

};

class Derived : public Base
{
public:
	Derived() {};
	virtual ~Derived() { Test(); temp(); };

	virtual void Test() { cout << "Derived Test" << endl; }

	void temp() { cout << "Derived Temp" << endl; }
};


int main()
{
	Derived* A = new Derived;
	delete A;

	return 0;
}