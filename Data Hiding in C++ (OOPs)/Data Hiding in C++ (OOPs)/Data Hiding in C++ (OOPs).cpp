// Data Hiding in C++ (OOPs).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {

private:                 
    int length;       // Data Hiding
    int breadth;      //  "    "

public:
    void setLength(int l) {         // Mutator Function
        if (l > 0) {
            length = l;
        }
        else {
            length = 0;
            cout << "Length can not be negative" << endl;
        }
    }
    void setBreadth(int b) {        // Mutator Function
        if (b > 0) {
            breadth = b;
        }
        else {
            breadth = 0;
            cout << "Breadth can not be negative" << endl;
        }
    }
    int getLength() {        // Accessor Function
        return length;
    }
    int getBreadth() {        // Accessor Function
        return breadth;
    }
    int Area() {
        return length * breadth;
    }
    int Perimeter() {
        if (length < 0 || breadth < 0){
            return 0;
        }
        else {
            return 2 * (length + breadth);
        }
    }
};

int main()
{
    Rectangle r;
    r.setLength(-1);
    r.setBreadth(15);
    cout << "The length of the rectangle is " << r.getLength() << endl;
    cout << "The breadth of the rectangle is " << r.getBreadth() << endl;
    cout << "The area of the rectangle is " << r.Area() << endl;
    cout << "The perimeter of the rectangle is " << r.Perimeter() << endl;
}

