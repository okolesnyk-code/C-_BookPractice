#include "chapter3_exercise1.h"
#include <iostrem>
#include <iomanip>
#include <string>
using namespace std;

void chapter3_exercise1() {

	int number;
	int columns = 10;
	int rows = 20;
	int multiplicator = 1;

	cout << "Enter number for multiplication: ";
	cin >> number;

	// define width of a column for setw

	int maxNumber = number * columns * rows;
	int width = to_string(maxNumber).length() + 1;

	cout << endl;

	for (int i = 0; i < columns; i++)
	{

		for (int i = 0; i < rows; i++)
		{
			cout << setw(width) << multiplicator * number;

			multiplicator++;

		}

		cout << endl;

	}

	cout << endl;

}