// Function Overriding in OOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base {
public:
    void fun() {
        cout << "Function of base" << endl;
    }
};
class Derived : public Base {
public:
    void fun() {
        cout << "Function of derived" << endl; 
    }
};

int main()
{
    Base b;
    Derived d;
    b.fun();
    d.fun();      // Function of Class Derived overrides Function of Class Base.
                  // This is Function Overriding.
}


