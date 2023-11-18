// Sum of n numbers loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, sum = 0, fact = 1;
    cout << "Enter n: ";
    cin >> n;

    for (i = 1;i <= n;i++) {
        sum = sum + i;
        fact = fact * i;
    }

    cout << "Sum = " << sum << endl;
    cout << "Factorial = " << fact << endl;
    cout << endl << endl;


}

