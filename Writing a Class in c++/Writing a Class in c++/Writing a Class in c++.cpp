// Writing a Class in c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Rectangle {

public:
	int length;
	int breadth;

	int Area() {
		return length * breadth;
	}
	int Perimeter() {
		return 2 * (length + breadth);
	}

};

int main()
{
	// Creating an object in stack:-
	Rectangle r1;
	cout << "Enter the Length and Breadth of the rectangle: ";
	cin >> r1.length >> r1.breadth;
	cout << "The Area of the Rectangle is: " << r1.Area() << endl;
	cout << "The Perimeter of the Rectangle is: " << r1.Perimeter() << endl;

	// Creating an object in Heap :- (use of pointer) ***IMP***
	Rectangle* r = new Rectangle();
	cout << "Enter the Length and Breadth of the rectangle: ";
	cin >> r -> length >> r -> breadth;  
	cout << "The Area of the Rectangle is: " << r -> Area() << endl;
	cout << "The Perimeter of the Rectangle is: " << r -> Perimeter() << endl;

	// r -> lenght = 10; is an example of how dat is assigned while creating an object in heap
	// r -> Area(); is how we call functions
}

