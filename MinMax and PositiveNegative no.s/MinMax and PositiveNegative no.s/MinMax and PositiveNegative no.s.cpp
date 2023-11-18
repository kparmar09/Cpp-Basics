// MinMax and PositiveNegative no.s.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;

	cout << "Enter the two numbers a and b : ";
	cin >> a >> b;

	if (a > b) {
		cout << "Number " << a << " is greater than number " << b << endl;
	}
	else{
		cout << "Number " << b << " is greater than number " << a << endl;
	}

	if (a >= 0) {
		cout << a << " is positive"<<endl;
	}
	else {
		cout << a << " is negative"<<endl;
	}
	if (b >= 0) {
		cout << b << " is positive" << endl;
	}
	else {
		cout << b << " is negative" << endl;
	}

}

