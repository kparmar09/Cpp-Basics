// String Practice Problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   // To find lenght of string without the s.lenght() function :-
	int count = 0;
	string str1 = "Homework";

	for (int i = 0; str1[i] != '\0';i++) {
		count++;
	}
	cout << "Length of the string is " << count << endl;
	cout << "========================================================" << endl;

	// To convert uppercase string to lowercase string :-
	string str2 = "HoMeWoRK";
	for (int i = 0;str2[i] != '\0';i++) {
		if (str2[i] >= 65 && str2[i] <= 95) { // Makes sure that only uppercase are converted to lowercase or else we get out of scope value
			str2[i] += 32;  // The difference between ASCII number of uppercase and lowercase is 32.
		}	
	}
	cout << "The lowercase is " << str2 << endl;
	cout << "========================================================" << endl;

	// To count number of consonants, vowels and words :-
	string str3 = "I have not done my homework";
	int con = 0;
	int vow = 0;
	int spc = 0;
	for (int i = 0; str3[i] != '\0';i++) {
		if (str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u' || str3[i] == 'A' || str3[i] == 'E' || str3[i] == 'I' || str3[i] == 'O' || str3[i] == 'U') {
			vow++;
		}
		else if (str3[i] == ' ') {
			spc++;
		}
		else {
			con++;
		}
	}
	cout << "Number of vowels in the sentence are " << vow << endl;
	cout << "Number of consonants in the sentence are " << con << endl;
	cout << "Number of words in the sentence are " << spc + 1 << endl;
	cout << "========================================================" << endl;

	// To find if a word is palindrome or not :- ****IMP****
	string str4 = "madam";
	string revstr = "";
	
	int len = str4.length();
	revstr.resize(len);
	
	for (int i = 0, j = len - 1; i < len; i++, j--) {
		revstr[i] = str4[j];
	}
	if (str4.compare(revstr) == 0){
		cout << "It is a palindrome" << endl;
	}
	else {
		cout << "Not a palindrome" << endl;
	}
	cout << "========================================================" << endl;

	// To find out the username from an email address :-
	string str5 = "krishnaparmar850@gmail.com";
	cout << "The username is: " << str5.substr(0, str5.find('@')) << endl;
	cout << "========================================================" << endl;
}

