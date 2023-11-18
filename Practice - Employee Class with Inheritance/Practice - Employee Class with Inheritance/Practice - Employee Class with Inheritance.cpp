// Practice - Employee Class with Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
public:
    Employee(string name, int id) {
        this->name = name;
        this->id = id;
    }
    string getName() { return name; }
    int getId() { return id; }
};
class PartTime : public Employee {
public:
    int wage;
    PartTime(string n, int id,  int m):Employee(n,id) {
        wage = m;
    }
    int getWage() {
        return wage;
    }

};
class FullTime : public Employee {
public:
    int salary;
    FullTime(string n, int id, int m) :Employee(n, id) {
        salary = m;
    }
    int getSalary() {
        return salary;
    }

};

int main()
{
    PartTime p1("Ritesh", 501, 100);
    FullTime p2("KP", 502, 10000);
    cout << "Wage of " << p1.getName() << " with id: " << p1.getId() << " is " << p1.getWage() << endl;
    cout << "Salary of " << p2.getName() << " with id: " << p2.getId() << " is " << p2.getSalary() << endl;
}


