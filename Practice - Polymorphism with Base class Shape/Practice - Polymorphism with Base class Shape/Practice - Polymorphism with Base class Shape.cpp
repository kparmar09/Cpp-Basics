// Practice - Polymorphism with Base class Shape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
	virtual float Area() = 0;
	virtual float Perimeter() = 0;
};
class Rectangle :public Shape {
private:
	float length;
	float breadth;
public:
	Rectangle(float l = 1, float b = 1) {
		length = l;
		breadth = b;
	}
	float Area() {
		return length * breadth;
	}
	float Perimeter() {
		return 2 * (length + breadth);
	}
};
class Circle :public Shape {
private:
	float radius;
public:
	Circle(int r = 0) {
		radius = r;
	}
	float Area() {
		return 3.14f * pow(radius, 2);
	}
	float Perimeter() {
		return 2 * 3.14f * radius;
	}
};

int main()
{
	Shape* ptr;
	ptr = new Rectangle(5, 4);
	cout << "The Area of Rectangle is = " << ptr->Area() << endl;
	cout << "The Perimeter of Rectangle is = " << ptr->Perimeter() << endl;
	ptr = new Circle(5);
	cout << "The Area of Circle is = " << ptr->Area() << endl;
	cout << "The Circumference of Circle is = " << ptr->Perimeter() << endl;
}


