// Constructors in Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Non-Param of Base" << endl;
	}
	Base(int x) {
		cout << "Param of Base " << x << endl;;
	}
};

class Derived :public Base {
public:
	Derived() {
		cout << "Non-Param of Derived" << endl;
	}
	Derived(int x) {
		cout << "Param of Derived " << x << endl;
	}
	Derived(int a, int b) :Base(b) {                 // Passing b to the Parameterized Constructor in class Base
		cout << "Param of Derived " << a << endl;
	}
};

int main()
{
	Base x;
	Base y(20);
	Derived a;
	Derived b(10);
	Derived c(10, 15);
	// RUN THE PROGRAM TO SEE RESULTS

}

