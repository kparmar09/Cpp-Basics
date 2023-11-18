// Static Data Member and Static Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Test {
private:
    int a, b;
public:
    static int count;

    Test() {
        a = 10;
        b = 20;
        count++;
    }
    static int getCount(){   // Static functions only for static data member
        return count;
    }
};

int Test::count = 0; // This declaration is important when using static members in a class

int main()
{
    Test t1;
    cout << t1.count << endl;
    Test t2;
    cout << t2.count << endl;
    cout << Test::count << endl;
    Test t3;
    cout << t3.getCount() << endl;
    cout << Test::getCount() << endl;

}
