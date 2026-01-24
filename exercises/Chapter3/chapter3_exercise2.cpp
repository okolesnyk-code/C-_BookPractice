#include "chapter3_exercise2.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void chapter3_exercise2() {

	float celsius, fahrenheits;
	int choice;

	cout << "Choose:" << endl << endl
		<< "Enter 1 if you want to convert Celsius to Fahrenheits" << endl
		<< "Enter 2 if you want to convert Fahrenheits to Celsius" << endl << endl
		<< "Your choice: ";

	cin >> choice;

	if (choice == 1)
	{
		cout << "Enter Celsius: ";
		cin >> celsius;
		fahrenheits = celsius * 9 / 5 + 32;
		cout << endl << celsius << " Celsius = " << fahrenheits << " Fahrenheits" << endl;
	}
	else if (choice == 2)
	{
		cout << "Enter Fahrenheits: ";
		cin >> fahrenheits;
		celsius = (fahrenheits - 32) * 5 / 9;
		cout << endl << celsius << " Fahrenheits = " << fahrenheits << " Celsius" << endl;
	}
	else
	{
		cout << "Enter correct choice";
		exit(0);
	}

}