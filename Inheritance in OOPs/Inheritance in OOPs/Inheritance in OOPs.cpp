// Inheritance in OOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() {
        setLength(0);
        setBreadth(0);
    }
    Rectangle(int l, int b) {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle& rect) {
        length = rect.length;
        breadth = rect.breadth;
    }
    void setLength(int l) {
        if (l > 0) {
            length = l;
        }
        else {
            length = 0;
        }
    }
    void setBreadth(int b) {
        if (b > 0) {
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
};

class Cuboid : public Rectangle {
private:
    int height;
public:
    Cuboid(int h) {
        height = h;
    }
    int Volume() {
        return getLength() * getBreadth() * height;
    }
};

int main()
{
    Cuboid c(5);
    c.setLength(6);
    c.setBreadth(7);

    cout << "The volume of the cuboid is: " << c.Volume();
}
