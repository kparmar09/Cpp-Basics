// Area of Circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float r,area,circumference;

	cout << "Enter radius of circle ";
	cin >> r;

	area = ((float)22 / 7) * pow(r, 2);
	circumference = 2 * ((float)22 / 7) * r;

	cout << "The area of the circle = " << area << endl;
	cout << "The circumference of the circle = " << circumference << endl;
}
