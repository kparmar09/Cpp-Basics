// Drawing Problem using Nested For loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

//This program includes all the drawing problems in course like square, U.Tri.Matrix, L.Tri.M, Cross U.Tri.M, Cross L.Tri.M
//Lets use 4x4 scale for this program

int main()
{
    int count = 0;

    //For Series of number from 1 to 16
    for (int i = 0; i < 4;i++) {
        for (int j = 0; j < 4;j++) {
            count = count + 1;
            cout << count << " ";
        }
        cout << endl;
    }

    cout << endl;

    //For Square
    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 4;j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    //For Upper Triangular Matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i <= j) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    //For Lower Triangular Matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i >= j) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    //For Upper Cross Triangular Matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if ((i+j) <= 3) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    //For Lower Cross Triangular Matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if ((i + j) >= 3) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}

