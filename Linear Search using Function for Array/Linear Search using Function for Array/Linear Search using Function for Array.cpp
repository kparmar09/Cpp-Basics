// Linear Search using Function for Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int search(int X[], int a, int key) {
    for (int i = 0; i < a; i++) {
        if (key == X[i]) {
            return i;
        }
        return -1;
    }

}

int main()
{
    int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int k;
    cout << "Enter element that needs to be found: ";
    cin >> k;
    cout << "The index for the element in the array is: " << search(A, 10, k) << endl;
}
