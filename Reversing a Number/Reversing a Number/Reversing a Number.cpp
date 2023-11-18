// Reversing a Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

// ALSO A PROGRAM TO CHECK PALINDROME NUMBERS ie. 1661 reversed is 1661.

int main()
{
    int n, r, rev = 0;
    cout << "Enter the Number: ";
    cin >> n;

    int m = n;

    while (n > 0) {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r; //important logic
    }
    cout << "The reversed number is: " << rev << endl;

    if (rev == m) {
        cout << "The number is a Palindrome Number" << endl;
    }
}


