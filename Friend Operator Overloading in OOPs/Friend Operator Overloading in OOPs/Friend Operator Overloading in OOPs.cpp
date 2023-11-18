// Friend Operator Overloading in OOPs.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    void Display() {
        cout << "The resulting Imaginary number is = " << real << " + " << imaginary << "i" << endl;
    }

    friend Complex operator+(Complex c1, Complex c2); 
    // This is a friend function (Friend of a class and not actually part of it)
};

int main()
{
    Complex c1(10, 12);
    Complex c2(15, 10);
    Complex c3;
    c3 = c1 + c2;
    c3.Display();
    

}

Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}
