// Throw and Catch bw Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Divide(int a, int b) {
    if (b == 0) {
        throw 1;
    }
    else {
        return a / b;
    }

}


int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    try {
        c = Divide(a, b);
        cout << c << endl;
    }
    catch(int e){
        cout << "Division by 0 is not defined";
    }
}


