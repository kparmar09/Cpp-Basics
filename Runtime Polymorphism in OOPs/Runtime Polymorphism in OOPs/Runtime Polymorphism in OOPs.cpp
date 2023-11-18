// Runtime Polymorphism in OOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Car {
public:
    virtual void Start() = 0; 
    // These are pure virtual functions which means they the child class functions will override them for sure.
    virtual void Stop() = 0;
};
class Innova :public Car {
public:
    void Start() {
        cout << "Innova started" << endl;
    }
    void Stop() {
        cout << "Innova stopped" << endl;
    }
};
class Swift :public Car {
public:
    void Start() {
        cout << "Swift started" << endl;
    }
    void Stop() {
        cout << "Swift stopped" << endl;
    }
};

int main()
{
    Car* ptr;
    ptr = new Innova();
    ptr->Start();
    ptr->Stop();
    ptr = new Swift();
    ptr->Start();
    ptr->Stop();

    // This is Polymorphism where the same function ptr->Start()/Stop() is being called but the output is different.
    // This is achieved by the help of Virtual Functions in Base class and Base Class Pointer Derived Class Object.
    // Hence we can also say that the generalisation of Innova and Swift as Car helps in polymorphism.
}


