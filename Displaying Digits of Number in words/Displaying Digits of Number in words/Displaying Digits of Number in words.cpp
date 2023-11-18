// Displaying Digits of Number in words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, r1, r2, rev1=0;
	cout << "Enter the Number: ";
	cin >> n;

	while (n != 0) {
		r1 = n % 10;
		rev1 = rev1 * 10 + r1;
		n = n / 10;

	}
	while (rev1 != 0) {
		r2 = rev1 % 10;
		rev1 = rev1 / 10;

		switch (r2) {

		case 1: cout << "One ";
			break;
		case 2: cout << "Two ";
			break;
		case 3: cout << "Three ";
			break;
		case 4: cout << "Four ";
			break;
		case 5: cout << "Five ";
			break;
		case 6: cout << "Six ";
			break;
		case 7: cout << "Seven ";
			break;
		case 8: cout << "Eight ";
			break;
		case 9: cout << "Nine ";
			break;
		case 0: cout << "Zero ";
			break;
		default: cout << "Zero ";
		}
	}

}


