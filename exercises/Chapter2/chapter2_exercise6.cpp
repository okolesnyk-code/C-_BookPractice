#include "chapter2_exercise6.h"
#include <iostream>
#include <windows.h>

using namespace std;

void chapter2_exercise6() {

	float dollar, pound, frank, german_mark, yen;

	cout << "Enter dollars: ";
	cin >> dollar;

	pound = dollar / 1.487;
	frank = dollar / 0.172;
	german_mark = dollar / 0.584;
	yen = dollar / 0.00955;

	cout << endl << dollar << "$ = " << pound << " pounds, " << frank << " franks, " << german_mark << " german marks, " << yen << " yens" << endl;


}