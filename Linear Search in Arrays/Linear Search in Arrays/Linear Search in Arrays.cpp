// Linear Search in Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A[5], n = 5;
    int key;

    cout << "Enter the numbers of the Array" << endl;

    for (int i = 0; i < n;i++) {
        cin >> A[i];
    }
    
    cout << "Enter Key ";
    cin >> key;
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (A[i] == key) {
            cout << "found at index: " << i << endl;
            exit(0);//Means that when this loop is executed, the program will stop at this point
        }
    }
    cout << "Index not Found"; //Able to write this after the loop due to exit(0) statement...
}

