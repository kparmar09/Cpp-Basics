// Constructors in OOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void setLength(int l) {
        if (l > 0) {
            length = l;
        }
        else {
            length = 0;
        }
    }
    void setBreadth(int b) {
        if(b > 0) {
            breadth = b;
        }
        else {
            breadth = 0;
        }
    }
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }

    Rectangle() {                 // NON PARAMETERIZED CONSTRUCTOR
        setLength(0);
        setBreadth(0);
    }
    Rectangle(int l, int b) {     // PARAMETERIZED CONSTRUCTOR (Can merge non parameterized in this by int l=0 & int b=0)
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle& rect) {   // COPY CONSTRUCTOR
        length = rect.length;
        breadth = rect.breadth;
    }

    // One more type -- DEEP COPY CONSTRUCTOR .... Not understood yet

};

int main()
{
    Rectangle r1;
    Rectangle r2(10, 15);
    Rectangle r3(r2);

    cout << "Length and breadth of r1 is: " << r1.getLength() << " & " << r1.getBreadth() << endl;
    cout << "Length and breadth of r2 is: " << r2.getLength() << " & " << r2.getBreadth() << endl;
    cout << "Length and breadth of r3 is: " << r3.getLength() << " & " << r3.getBreadth() << endl;

}

