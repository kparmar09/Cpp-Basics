// First.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "May I know your name ?";
    getline(cin, name);


    cout << "You are welcome Mr/Mrs " << name << endl;

    return 0;


}

