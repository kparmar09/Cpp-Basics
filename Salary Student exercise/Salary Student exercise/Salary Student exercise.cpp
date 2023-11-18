// Salary Student exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float basicSalary, percentOfAllowance, percentOfDeduction, netSalary;

    cout << "Enter the Basic salary that you recieve : ";
    cin >> basicSalary;
    cout << "Enter the Percentage of allowance given : ";
    cin >> percentOfAllowance;
    cout << "Enter the Percentage of deduction from salary : ";
    cin >> percentOfDeduction;

    netSalary = basicSalary + ((basicSalary / 100) * percentOfAllowance) - ((basicSalary / 100) * percentOfDeduction);

    cout << "So the Net salary recieved by you is " << netSalary << " after allowances and deductions" << endl;


}
