// Scope Resolution Operator in OOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength() { return length; };   // INLINE FUNCTIONS
    int getBreadth() { return breadth; };  // INLINE FUNCTIONS
    int Area();
    int Perimeter();
    
};

// NON INLINE FUNCTIONS USING SCOPE RESOLUTION OPERATOR (::) :-
Rectangle::Rectangle() {
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle& r) {
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l) {
    length = l;
}
void Rectangle::setBreadth(int b) {
    breadth = b;
}
int Rectangle::Area() {
    return length * breadth;
}
int Rectangle::Perimeter() {
    return 2 * (length + breadth);
}


int main()
{
    Rectangle r1;
    Rectangle r2(10, 15);
    Rectangle r3(r2);

    cout << "Length and Breadth of r1: " << r1.getLength() << " " << r1.getBreadth() << endl;
    cout << "Length and Breadth of r2: " << r2.getLength() << " " << r2.getBreadth() << endl;
    cout << "Length and Breadth of r3: " << r3.getLength() << " " << r3.getBreadth() << endl;
    cout << "Area and Perimeter of r1: " << r1.Area() << " " << r1.Perimeter() << endl;
    cout << "Area and Perimeter of r2: " << r2.Area() << " " << r2.Perimeter() << endl;
    cout << "Area and Perimeter of r3: " << r3.Area() << " " << r3.Perimeter() << endl;

}

