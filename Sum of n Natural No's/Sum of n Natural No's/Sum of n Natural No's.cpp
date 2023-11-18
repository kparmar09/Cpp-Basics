// Sum of n Natural No's.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, a;

	cout << "Enter number n to which sum needs to be calculated ";
	cin >> n;

	a = n * (n + 1) / 2;

	cout << "The sum of the following is equal to "<< a;


}


