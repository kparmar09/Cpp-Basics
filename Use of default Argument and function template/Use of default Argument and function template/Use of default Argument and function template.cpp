// Use of default Argument and function template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
template<class T>

T max(T x, T y, T z = 0) { // here z = 0 is default statement where in we can fin max between 2 as well as 3 numbers
	return x > y && x > z ? x : y > z ? y : z; // finding max by built in simplifiers
}

int main()
{
	//cout << max(3, 5) << endl;
 	cout << max(3, 5, 6) << endl;             // int
	cout << max(3.5, 6.7, 3.2) << endl;       // double
	cout << max(1.2f, 9.5f, 11.9f) << endl;   // float

}
