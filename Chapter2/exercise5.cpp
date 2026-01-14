#include <iostream>
#include <windows.h>
#include <ctype.h>

using namespace std;

void chapter2_exercise5() {

	char s;

	cout << "Enter a symbol: ";
	cin >> s;
	cout << endl << "if output is 0 - your symbol is a Big, if output is 1 - your symbol is a low" << endl << endl << islower(s) << endl;


}