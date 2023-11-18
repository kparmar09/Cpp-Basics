// Nested For Loop to form pair of points.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++) {
		for(int j = 1;j <= 9; j++) {
			cout << "(" << i << "," << j << ") ";
		}
		cout << endl;
   }

}

