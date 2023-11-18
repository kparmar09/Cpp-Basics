// Exception Handling Construct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try {
        if (b == 0) {
            throw 99;      // The thrown variable is catched by the catch func
        }                  // The value of this thrown variable doesnt matter it can be anything
        else {
            c = a / b;
            cout << c << endl;
        }
    }
    catch (int e) {
        cout << "Devision by 0 is not defined" << endl;
    }
}

