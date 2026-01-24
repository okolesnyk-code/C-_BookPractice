#include "exercise6.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void chapter3_exercise6() {

	int result = 1;
	int n;
	cout << "Enter a number for the factorial: ";
	cin >> n;

	if (n < 0) {

		cout << "\nFactorial is undefined" << endl;
		exit(0);
	}

	for (int i = n; i > 0; i--)
	{
		result = result * i;
	}

	cout << "\nFactorial of " << n << " is: " << result << endl;
}