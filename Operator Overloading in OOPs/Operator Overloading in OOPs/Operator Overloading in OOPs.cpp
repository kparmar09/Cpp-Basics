// Operator Overloading in OOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int real = 0, int img = 0) {
        this->real = real;
        imaginary = img;
    } 
    Complex operator+(Complex c) {            // operator+ is operator overloading...
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    int getReal() {
        return real;
    }
    int getImaginary() {
        return imaginary;
    }
};

int main()
{
    Complex c1(10, 15);
    Complex c2(10, 15);
    Complex c3;

    c3 = c1 + c2;

    cout << "Addition of complex no.s c1 and c2 is " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

}


