// Rough.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Array{
	int A[20];
	int length;
	int size;
};

void Lrotate(struct Array* arr) {
	int x = arr->A[0];
	for (int i = 0; i < arr->length; i++) {
		arr->A[i] = arr->A[i + 1];
		
	}
	arr->A[arr->length-1] = x;
}


int main()
{
	struct Array arr = { {1,2,3,4,5},5,20 };;
	Lrotate(&arr);
	for (int i = 0; i < arr.length; i++) {
		cout << arr.A[i];
		cout << endl;
	}
}

