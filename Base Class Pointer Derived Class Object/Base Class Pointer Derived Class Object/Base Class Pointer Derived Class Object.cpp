// Base Class Pointer Derived Class Object.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base {
public:
    void fun1() {
        cout << "Fun1 of Base";
    }
};
class Derived : public Base {
public:
    void fun2() {
        cout << "Fun2 of Derived";
    }
};

int main()
{
    Base* p;  // Base Class Pointer
    p = new Derived(); // Derived Class Object 
    // Rectangle is pointing to a cuboid which is possible logically but not the other way around
    // A rectangle cannot be a cuboid.
    p->fun1();
    //p->fun2(); [INVALID]
    // Only fun1(); can be used as only functions in base class can be accessed by this.
}


