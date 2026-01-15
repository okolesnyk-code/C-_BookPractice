#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void chapter2_exercise8() {

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	cout << setfill('.') << "Кількість жителів міст України на певний рік" << endl << endl
		<< "Kyiv" << setw(30) << "3,7 млн. 2025р." << endl
		<< "Dnipro" << setw(30) << "968 502 тис. 2022р." << endl
		<< "Kharkiv" << setw(30) << "1,3 млн 2025р." << endl
		<< "Odessa" << setw(30) << "1 млн 2022р." << endl;

}