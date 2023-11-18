// Factors of a number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter number n: ";
    cin >> n;
    cout << endl;

    for (i = 1;i <= n;i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }


}

