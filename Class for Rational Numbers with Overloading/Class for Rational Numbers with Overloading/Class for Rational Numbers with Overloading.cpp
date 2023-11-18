// Class for Rational Numbers with Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;
public:
    Rational(int n = 1, int d = 1) {
        numerator = n;
        denominator = d;
    }
    void setNumerator(int n) {
        numerator = n;
    }
    void setDenominator(int d) {
        if(d != 0){
            denominator = d;
        }
        else {
            cout << "Invalid. Denominator cannot be zero" << endl;
            exit(0);
        }
    }
    friend Rational operator+(Rational r1, Rational r2);
    friend ostream& operator<<(ostream& out, Rational& r);

};

int main()
{
    Rational r1, r2, r3;
    int x, y, z, w;
    cout << "Enter Numerator and denominator of First Rational Number: ";
    cin >> x >> y;
    cout << "Enter Numerator and denominator of Second Rational Number: ";
    cin >> z >> w;
    r1.setNumerator(x);
    r1.setDenominator(y);
    r2.setNumerator(z);
    r2.setDenominator(w);
    r3 = r1 + r2;

    cout << "The Sum of the two rational numbers is: " << r3 << endl;

}

Rational operator+(Rational r1, Rational r2) {
    Rational temp;
    if (r1.denominator == r2.denominator) {
        temp.numerator = r1.numerator + r2.numerator;
        temp.denominator = r1.denominator;
        return temp;
    }
    else {
        temp.numerator = (r2.denominator * r1.numerator) + (r1.denominator * r2.numerator);
        temp.denominator = r1.denominator * r2.denominator;
        return temp;
    }
}
ostream& operator<<(ostream& out, Rational& r) {
    out << r.numerator << "/" << r.denominator;
    return out;
}

