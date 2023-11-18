// Operations using switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int option;
    float a, b, c;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << "MENU\n";
    cout << "1.Add\n" << "2.Subtract\n" << "3.Multiply\n" << "4.Divide\n";
    cout << "Select option number: ";
    cin >> option;

    switch (option) {

    case 1: c = a + b;
        cout << "Ans = " << c << endl;
        break;
    case 2: c = a - b;
        cout << "Ans = " << c << endl;
        break;
    case 3: c = a * b;
        cout << "Ans = " << c << endl;
        break;
    case 4: c = a / b;
        cout << "Ans = " << c << endl;
        break;

    default: cout << "Invalid Option Selected";
             

    }
    cout << endl << endl;
}

