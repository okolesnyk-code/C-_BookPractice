#include "chapter4_exercise5.h"
#include <iostream>
using namespace std;

struct date {
    int day;
    int month;
    int year;
};

void chapter4_exercise5() {
    
    date d;
    char separator1, separator2;

    cout << "Enter date (dd/mm/yyyy): ";
    cin >> d.day >> separator1 >> d.month >> separator2 >> d.year;

    cout << "You entered date: "
        << d.day << "/" << d.month << "/" << d.year << endl;

}
