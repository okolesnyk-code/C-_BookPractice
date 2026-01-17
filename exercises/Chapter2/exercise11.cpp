#include "exercise11.h"
#include <iostream>
#include <iomanip>

using namespace std;

void chapter2_exercise11() {
    cout << setiosflags(ios::left);

    cout << setw(15) << "Surname"
        << setw(15) << "Name"
        << setw(20) << "Street"
        << setw(20) << "City" << endl;

    cout << "---------------------------------------------------------------" << endl;

    cout << setw(15) << "Petrenko"
        << setw(15) << "Vasyl"
        << setw(20) << "Shevchenka 10"
        << setw(20) << "Kyiv" << endl;

    cout << setw(15) << "Ivanenko"
        << setw(15) << "Serhii"
        << setw(20) << "Bandery 5"
        << setw(20) << "Lviv" << endl;

    cout << setw(15) << "Kovalenko"
        << setw(15) << "Ivan"
        << setw(20) << "Khreshchatyk 21"
        << setw(20) << "Dnipro" << endl;


}
