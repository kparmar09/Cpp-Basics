// Maximum of 3 numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter the 3 numbers which are to be compared :";
	cin >> a >> b >> c;

	if (a > b && a > c) {
		cout << a << " is the number with max value";
	}
	else {
		if (b > c) {
			cout << b << " is the number with max value";
		}
		else {
			cout << c << " is the number with max value";
		}
	}

}

