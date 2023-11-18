// Arrays Intro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int A[] = { 1,2,3,4,5,6 };

    for (auto x : A) {           //for-each loop
        cout << x << " ";
    }

}

