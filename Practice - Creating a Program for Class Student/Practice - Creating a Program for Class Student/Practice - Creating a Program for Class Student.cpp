// Practice - Creating a Program for Class Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Student {
private:
    int rollNo;
    int phyMrks;
    int mathMrks;
    int chemMrks;
    string name;

public:
    Student(int r, int p, int m, int c, string n) {
        rollNo = r;
        phyMrks = p;
        mathMrks = m;
        chemMrks = c;
        name = n;
    }
    int Total() {
        return phyMrks + mathMrks + chemMrks;
    }
    string Grade();
};

int main()
{
    int roll, phy, chem, math;
    string name;
    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Enter your Roll No. ";
    cin >> roll;
    cout << "Enter marks in Physics: ";
    cin >> phy;
    cout << "Enter marks in Chemistry: ";
    cin >> chem;
    cout << "Enter marks in Maths: ";
    cin >> math;

    cout << endl;
    cout << "================================================";
    cout << "================================================";
    cout << endl << endl;

    Student s(roll, phy, math, chem, name);
    cout << "Name: " << name << endl;
    cout << "Roll No. " << roll << endl;
    cout << "Your Total Marks are: " << s.Total() << endl;
    cout << "Your Grade is: " << s.Grade() << endl;
}

string Student::Grade() {
    {
        int avg = ((mathMrks + phyMrks + chemMrks) * 100)/ 300 ;

        if (avg >= 90) {
            return "A Grade";
        }
        else if (avg >= 80 && avg < 90) {
            return "B Grade";
        }
        else if (avg >= 70 && avg < 80) {
            return "C Grade";
        }
        else if (avg >= 60 && avg < 70) {
            return "D Grade";
        }
        else if (avg >= 50 && avg < 60) {
            return "Pass";
        }
        else {
            return "Fail";
        }
        
    }
}

