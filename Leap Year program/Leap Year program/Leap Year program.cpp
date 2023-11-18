// Leap Year program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int year;

	cout << "Enter the Year: ";
	cin >> year;

	if (year % 4 == 0) {

		if (year % 100 == 0) {
        
			if (year % 400 == 0) {
				cout << "Year is leap year";
			}
			else {
				cout << "Year is not leap year";
			}

	 }
		else {
			cout << "Year is leap year";
		}
	
	}
	else {
		cout << "Year is not leap year";
	}

}




