// 2D Arrays - Addition of 2 matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A[2][3] = { {2,5,6},{8,9,12} };
	int B[2][3] = { {10,6,7},{13,4,3} };
	int C[2][3];

	for (int i = 0;i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
			cout << " " << C[i][j];
		}
		cout << endl;
	}
	//for (int i = 0;i < 2; i++) {
		//for (int j = 0; j < 3; j++) {
			//cout << " " << C[i][j];
		//}
		//cout << endl;
	//}

}

