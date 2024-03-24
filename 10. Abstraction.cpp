/*Abstraction mean incomplete

Control abstraction - hidding implementation
(using Access specifier) 

Data abstraction - exe file

Abstract class - contain abstract method or pure virtual function (do not have body implemented) */


// Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() {}

};

class derived : public base {
public:
	void print() { cout << "virtual function\n"; }
	
	void show() { cout << "just function\n"; }
};

int main()
{
	derived d;

	// Virtual function, binded at runtime
	d.print();

	// Non-virtual function, binded at compile time
	d.show();

	return 0;
}
