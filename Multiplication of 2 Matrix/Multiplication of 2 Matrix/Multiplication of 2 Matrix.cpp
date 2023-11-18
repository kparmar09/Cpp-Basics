// Multiplication of 2 Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int w, x, y, z;
	
	cout << "Enter rows and columns of Matrix 1 : ";
	cin >> w >> x;
	cout << "Enter rows and columns of Matrix 2 : ";
	cin >> y >> z;
	cout << endl;

	int A[10][10];
	int B[10][10];
	int C[10][10];


	if (w != x || y != z) {
		cout << "This program only allows multiplication of Square Matrices" << endl << "Please Enter Square Matrix";
		cout << endl;
		exit(0);
	}


	//FOR MATRIX A
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < x; j++) {
			cout << "Enter value of A" << i + 1 << j + 1 << ": ";
			cin >> A[i][j];			
		}
	}
	
	cout << endl;

	//FOR MATRIX B
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < x; j++) {
			cout << "Enter value of B" << i + 1 << j + 1 << ": ";
			cin >> B[i][j];
		}
	}
	
	//FOR MULTIPLY OF MATRIX
	for (int i = 0; i < y ;i++) {
		for (int j = 0; j < z; j++) {
			C[i][j] = 0;
			for (int k = 0; k < x; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	cout << "The multiplication of the 2 matrix is : ";
	cout << endl;

	//FOR PRINTING RESULT 
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < x; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}

