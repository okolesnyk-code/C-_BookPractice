#include "exercise7.h"
#include <iostream>

using namespace std;


void chapter2_exercise7() {

	float c, f;

	cout << "Enter Celsius: ";
	cin >> c;

	f = c * 9 / 5 + 32;

	cout << endl << c << " celsius = " << f << " fahrenheits" << endl;

}