// Roots For Quadratic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Quadratic {
private:
    int coeffX2;
    int coeffX1;
    int coeff;

public:
    Quadratic(int cX2 = 0, int cX1 = 0, int c = 0) {
        coeffX2 = cX2;
        coeffX1 = cX1;
        coeff = c;
    }
    void setCoeffX2(int cX2) {
        coeffX2 = cX2;
    }
    void setCoeffX(int cX1) {
        coeffX1 = cX1;
    }
    void setConst(int c) {
        coeff = c;
    }
    int getCoeffX2() {
        return coeffX2;
    }
    int getCoeffX() {
        return coeffX1;
    }
    int getConst() {
        return coeff;
    }
    void NatureRoots() {
        if (((coeffX1 * coeffX1) - (4 * coeffX2 * coeff)) > 0) {
            cout << "The Quadratic has real and unique roots" << endl;
        }
        else if (((coeffX1 * coeffX1) - (4 * coeffX2 * coeff)) < 0) {
            cout << "The Quadratic has imaginary roots" << endl;
        }
        else if (((coeffX1 * coeffX1) - (4 * coeffX2 * coeff)) == 0) {
            cout << "The Quadratic has real and equal roots" << endl;
        }
    }
    void Roots() {     // Problem arises for irrational roots.
        int D = (coeffX1 * coeffX1) - (4 * coeffX2 * coeff);
        if (D >= 0) {
            for (int i = -99; i <= 99; i++) {
                if (((coeffX2 * i * i) + (coeffX1 * i) + coeff) == 0) { 
                    cout << "x = " << i << endl;
                }
            }

        }
        else if (D < 0) {
            float real;
            float img;
            real = -0.5f * (coeffX1 / coeffX2);
            img = (sqrt((-1) * ((coeffX1 * coeffX1) - (4 * coeffX2 * coeff)))) / (2 * coeffX2);
            cout << "x = " << real << "+" << img << "i" << endl;
            cout << "x = " << real << "-" << img << "i" << endl;
        }
    }
    friend ostream& operator<<(ostream& out, Quadratic& q);

};

int main() {

    int c2, c1, c;
    cout << "Enter Coefficient of x^2 = ";
    cin >> c2;
    cout << "Enter Coefficient of x = ";
    cin >> c1;
    cout << "Enter the constant term = ";
    cin >> c;

    Quadratic x(c2, c1, c);
    cout << "Your Quadratic Equation is: " << x << endl;
    x.NatureRoots();
    x.Roots();

    return 0;
}

ostream& operator<<(ostream& out, Quadratic& q) {
    out << "(" << q.coeffX2 << ")x^2" << "+" << "(" << q.coeffX1 << ")x" << "+" << q.coeff << "=0";
    return out;
}