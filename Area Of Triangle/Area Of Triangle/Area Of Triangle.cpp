// Area Of Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float b, h, area;

	cout << "Enter measurement of base of triangle ";
	cin >> b;
	cout << "Enter measurement of height of triangle ";
	cin >> h;
	
	area = (b * h) / 2;
	cout << "Area of the triangle is equal to " << area << endl;

}

