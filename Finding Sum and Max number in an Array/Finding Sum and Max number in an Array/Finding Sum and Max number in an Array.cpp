// Finding Sum and Max number in an Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>;
using namespace std;

int main()
{
    int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = 10, sum = 0;
    int max = A[0];

    for (int i = 0;i < n;i++) {
        sum = sum + A[i];

        if (A[i] > max) {
            max = A[i];
        }
    }

    cout << "Sum of the array is " << sum << endl << endl;
    cout << "The maximum number of the array is " << max << endl << endl;
    


}

