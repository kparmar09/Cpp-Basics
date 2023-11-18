// Reading and Writing in a File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outfile("My.txt",ios::trunc);
    outfile << "Hello World" << endl;
    outfile << 25 << endl;
    outfile.close();

    ifstream infile;
    infile.open("My.txt");
    if (!infile.is_open()) {
        cout << "File Doesnt exist" << endl;
    }
    string str1;
    string str2;
    string str3;
    int x;
    infile >> str1;
    infile >> str2;
    infile >> x;
    cout << str1 << str2 << " " << x;
    if (infile.eof()) {
        cout << "End of file has been reached" << endl;
    }
    infile.close();
}


