// Perfect Number and Prime Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//FOR PRIME NUMBER :-
// Better approach would be to take an int count and inside if(n % i ==0) ---> put count++ and later is count++ = 2 --> Prime number

	int i=1, n, sum=0;

	cout << "Enter number n: ";
	cin >> n;

	for (i;i <= n;i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
		
	}
	if (sum - n == n) {
		cout << n << " is a Perfect Number";
	}
	else if (sum - n - 1 == 0) {  //Prime number has only 2 factors - 1 and the number itself.
		cout << n << " is a Prime Number";
	}
	else {
		cout << n << " is not a Perfect number";
	}
	cout << endl << endl;
}

