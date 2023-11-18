// Parameter Passing (Imp).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

// Pass By Value function :-
void swap1(int a, int b) {  // Formal Paramenters a,b cannot modify the actual parameters x,y
	int tempo = a;
	a = b;
	b = tempo;
}

// Pass By Address function :-
void swap2(int* a, int* b) { // Formal Paramenters a,b can modify the actual parameters x,y
	int tempo = *a;
	*a = *b;
	*b = tempo;
}

// Pass By Reference function :-
void swap3(int &a, int &b) { // Formal Paramenters a,b can modify the actual parameters x,y
	int tempo = a;
	a = b;
	b = tempo;
}


int main()
{
	int x = 10; int y = 20;
	swap1(x, y);
	cout << x << " " << y << endl;   // Output 10 20 .... Input 10 20 ... Not Working (by value)
	swap2(&x, &y);
	cout << x << " " << y << endl;   // Output 20 10 .... Input 10 20 ... Working (by address)
	swap3(x, y);
	cout << x << " " << y << endl;   // Output 10 20 .... Input 20 10 ... Working (by reference)
}
    // Call/Pass by reference method should'nt have complex code inside it.