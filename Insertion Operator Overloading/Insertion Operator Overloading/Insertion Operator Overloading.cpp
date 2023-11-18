// Insertion Operator Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    friend ostream& operator<<(ostream& out, Complex& c); 
    // This is Insertion Operator Overloading.
};

int main()
{
    Complex c1(2, 5); Complex c2(3, 5);
    
    cout << c1;     // Writing this is similar to operator<<(cout,c1);
    cout << c2;     // similar to operator<<(cout,c2);
}

ostream& operator<<(ostream& out, Complex& c) {              
    out << c.real << "+" << c.imaginary << "i" << endl;
    return out;
}
