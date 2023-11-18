// Displaying Digits of a number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

// Also a function to check Armstrong number

int main()
{
    int n, r, armstrong = 0;
    cout << "Enter the Number: ";
    cin >> n;

    int m = n;

    while (n > 0) {
        r = n % 10;                    // n % 10 gives the last digit of a number... eg: 1589 % 10 = 9.
        armstrong = armstrong + r * r * r;
        cout << r << endl;             // n / 10 removes the last digit as its an int value.... eg: 1589 / 10 = 158 and not 158.9
        n = n / 10;
    }
    if (armstrong == m) {
        cout << "It is an Armstrong number" << endl;
    }
    else {
        cout << "Not an Armstrong number";
    }


}

