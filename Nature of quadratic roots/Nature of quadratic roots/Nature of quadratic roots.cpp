// Nature of quadratic roots.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, D;

    cout << "Enter the coefficient of x^2 from the quadratic equation : ";
    cin >> a;
    cout << "Enter the coefficient of x from the quadratic equation : ";
    cin >> b;
    cout << "Enter the constant term from the quadratic equation : ";
    cin >> c;

    D = pow(b, 2) - 4 * a * c;

    if (D > 0) {
        cout << "The quadratic equation has real and unique roots";
    }
    else{
        if (D < 0) {
            cout << "The quadratic equation has imaginary roots";
        }
        else {
            cout << "The quadratic equation has real and equal roots";
        }
    }

}

