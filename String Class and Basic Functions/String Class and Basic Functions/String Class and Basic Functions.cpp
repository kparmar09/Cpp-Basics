// String Class and Basic Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // String Class
using namespace std;

int main()
{
    string str = "Hello";

    // BASIC FUNCTIONS :-
    cout << str.length() << endl;
    cout << str.capacity() << endl;
    str.resize(30);
    cout << str.capacity() << endl;
    cout << str.max_size() << endl;
    str.clear();
    cout << str.length() << endl;
    if (str.empty()) {
        cout << "String is empty" << endl;
    }
    else {
        cout << "String is " << str << endl;
    }
    cout << "==================================================================="<< endl;

    // SOME OTHER FUNCTIONS :-
    string s2 = "Hello";
    cout << s2.append(" World") << endl;
    cout << s2.insert(3, "ll") << endl;
    cout << s2.replace(3, 4, "kk") << endl; // Where 3 is the index of string and 4 is the no. of characters to be replaced
    //s2.erase(); --> Erases the string
    s2.push_back('s'); // It adds the character 's' at the end of the string
    cout << s2 << endl;
    s2.pop_back();
    cout << s2 << endl; // Removes the last character of string
    string s3 = "NOOB";
    s2.swap(s3);
    cout << s2 << endl;
    cout << "===================================================================" << endl;

    // SOME OTHER FUNCTIONS :-
    string s4 = "Welcome";
    char x[10];
    s4.copy(x, s4.length()); //where x is the character array where s4 is being copied and s4.length is till what index it needs to be copied
    x[s4.length()] = '\0';  // This is necessary otherwise garbage values may also be visible in output
    cout << x << endl;
    cout << s4.find("co") << endl;
    cout << s4.rfind("lc") << endl;
    cout << s4.find_first_of('e') << endl;
    cout << s4.find_last_of('e') << endl;
    cout << s4.find_first_of('e', 3) << endl; //Starts to look for 'e' from the index 3
    cout << s4.substr(2, 4) << endl;
    string str1 = "Hello";
    string str2 = "hello";
    cout << str1.compare(str2) << endl;
    cout << "===================================================================" << endl;

    // SOME OPERATORS FOR STRINGS :-
    string op = "Homogenous";
    string dp = " Solution";
    cout << op.at(3) << endl; // It is the same as op[3] ie. it gives the alphabet at index 3 
    cout << op.front() << endl; //Gives first letter
    cout << op.back() << endl; //Gives last letter
    cout << op + dp << endl; // Here '+' operator joins the 2 strings
    dp = op; // '=' operator Copies string op into dp 
    cout << dp << endl;
    cout << "===================================================================" << endl;

    // ITERATORS FOR STRINGS :-
    string str3 = "today";
    string::iterator it;  // Other iterator known as reverse_iterator reverses the direction.

    for (it = str3.begin(); it != str3.end(); it++) {
        *it = *it - 32; // For Capitalizing the word 
    }
    cout << str3 << endl;

    for (int i = 0; str[i] != '\0'; i++) {  // For loop can be used instead of iterator
        str[i] = str[i] - 32; // To convert it into upper case
    }
    cout << str3 << endl;
    cout << "===================================================================" << endl;
}

