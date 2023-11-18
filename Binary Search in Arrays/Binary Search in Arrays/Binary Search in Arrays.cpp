// Binary Search in Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int A[8], n = 8;
	int key, low = 0, high = 7, mid;

	cout << "Enter numbers of the Array"<< endl;

	// For Binary search to work, Array should be in Ascending order ....... ****IMP****

	for (int i = 0;i < n;i++) {
		cin >> A[i];
	}

	cout << "Enter the Key ";
	cin >> key;


	while (low <= high) {
		mid = (low + high) / 2;

		if (key == A[mid]) {
			cout << "The index of key is: " << mid;
			exit(0); // Means that when this loop is executed, the program will not run further.
		}
		else if (key > A[mid]) {
			low = low+1;
		}
		else {
			high = high-1;
		}
	}
	cout << "The Index of the key was not found" << endl;
	// We are able to write this not found statement after the end of the loop due to the exit(0) statement in If statement.
}

