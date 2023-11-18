 // Coding Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float u, v, distance1, acc;
    float p, r, t, SI;
    float radius, height, volume;
    float x1, x2, y1, y2, distance2;

    cout << "Insert Initial and Final velocity ";
    cin >> u >> v;
    cout << "Insert Acceleration of the object ";
    cin >> acc;

    distance1 = (v * v - u * u) / (2 * acc);
    cout << "The Distance calculated by the given information = " << distance1 << endl;

    cout << "Insert principal amount ";
    cin >> p;
    cout << "Insert time and interest per annum ";
    cin >> t >> r;

    SI = (p * r * t) / 100.0f;
    cout << "The Simple Interest = " << SI << endl;

    cout << "Insert radius and height of cylinder ";
    cin >> radius >> height;

    volume = 3.14 * pow(radius, 2) * height;
    cout << "The volume of the cylinder is " << volume << endl;

    cout << "Enter the x and y coordinates of point 1 ";
    cin >> x1 >> y1;
    cout << "Enter the x and y coordinates of point 2 ";
    cin >> x2 >> y2;

    distance2 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "The Distance between the two coordinates is " << distance2 << endl;



}

