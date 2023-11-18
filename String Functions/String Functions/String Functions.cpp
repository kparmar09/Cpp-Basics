// String Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    // For String lenght :-
    char s[100];
    cout << "Enter a word ";
    //cin >> s;
    cin.getline(s, 100); // Used because cin doesnt read the characters after space.
    cout << strlen(s) << endl;

    // For joining 2 strings :-
    char r1[100] = "Good";
    char r2[100] = "Morning";
    //strcat_s(r1, r2);
    strncat_s(r1, r2, 3); // Modified version of strcat
    cout << r1 << endl;

    // For copying one string to another :-
    char a1[100] = "";
    char a2[100] = "Noob";
    //strcpy_s(a1, a2);
    strncpy_s(a1, a2, 2); // Modified version of strcpy
    cout << a1 << endl;

    // For substring for String :-
    char x1[20] = "Programming";
    char x2[10] = "gram";
    if (strstr(x1, x2) != 0) {
        cout << strstr(x1, x2) << endl;
    }
    else {
        cout << "Not found"<< endl;
    }

    // For substring for characters :-
    char y1[100] = "Programming";
    cout << strchr(y1, 'r') << endl;
    cout << strrchr(y1, 'r') << endl; //Gets substring from right side

    // For comparing 2 strings based on ASCII code
    char z1[100] = "Hello";
    char z2[100] = "hello";
    cout << strcmp(z1, z2) << endl; // Gives output -1 if ascii code of z2 > z1, +1 if z1 > z2 and 0 if z1 = z2

    // To convert a string to a long integer or float
    char t1[10] = "245";
    char t2[10] = "2.455";
    long int x = strtol(t1, 0, 10); // 0 used for null and 10 used as its decimal number system
    float y = strtof(t2, 0);
    cout << x + 10 << "  " << y - 0.5f << endl; // Hence string converted to int and float and numeric operators can be used

    // To tokenize a string ie. assign values inside a string
    //char d1[100] = "x=10;y=20;z=30";
    //char* token = strtok(d1, "=;");
    //while (token != NULL) {
    //    cout << token << endl;
        //token = strtok_s(NULL, "=;");
    //}

}



