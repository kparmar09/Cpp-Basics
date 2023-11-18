// Greatest Common Divisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m, n;

	cout << "Enter two numbers m and n: ";
	cin >> m >> n;

	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else if (n > m) {
			n = n - m;
		}
	}
	cout << "GCD of the two numbers is : " << m << endl << endl;


}

