// Pointer - Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
 // Pointers are used to access Heap memory.... Code section can only access stack and the code itself

	int x = 10;
	int *p = &x;

	cout << x << endl;
	cout << &x << endl;
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;

}

// int A[2] = {1, 2}; ---> This is an array which will be allocated in stack

// To allocate an array in heap,
// 
// int *p;
// 
// p = new int[5]; ---> New here allocates memory of this pointer array in heap
// 
// p[0] = 1; ---> Assigning elements in array
//
// delete []p;    |-----> These 2 steps are very important as the memory in heap stays there until it is removed by program,
// p = nullptr;   |     > If it is not removed then the memory stays in heap and causes memory leak.


// Benefit of having Arrays in Heap is that we can change the size of arrays in heap multiple times :-
// 
// int *p = new int[20];
//
// delete []p; --> This is very important before creating a new array of different size.
// 
// p = new int[40]; --> This creates a new array of size 20 in the program.


// Arithmetic Pointers :-
// There are only 5 Types of arithmetic operations on pointers
// int A[size];
// int *p = A;
// int *q = &A[c]; (c is any number)
// 
// 1. p++;
// 2. p--;
// 3. p = p + c;
// 4. p = p - c;  (Where c is any constant0
// 5. d = p - q; -----> This gives us the distance between 2 variable adresses
// We dont have *,/,% functions here as it doesnt make any sense as we are dealing with the arithmetic of adresses of data in an array.