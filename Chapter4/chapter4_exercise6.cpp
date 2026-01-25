#include "chapter4_exercise6.h"
#include <iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

void chapter4_exercise6() {
    char firstLetter;
    etype position;

    cout << "Enter the first letter of the position (laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> firstLetter;

    // Визначаємо посаду за першою літерою
    switch (firstLetter) {
    case 'l': position = laborer; break;
    case 's': position = secretary; break;
    case 'm': position = manager; break;
    case 'a': position = accountant; break;
    case 'e': position = executive; break;
    case 'r': position = researcher; break;
    default:
        cout << "Invalid input!" << endl;
        // вихід з програми при помилці
        return;
    }

    // Виводимо повну назву посади
    switch (position) {
    case laborer: cout << "Full position name: laborer" << endl; break;
    case secretary: cout << "Full position name: secretary" << endl; break;
    case manager: cout << "Full position name: manager" << endl; break;
    case accountant: cout << "Full position name: accountant" << endl; break;
    case executive: cout << "Full position name: executive" << endl; break;
    case researcher: cout << "Full position name: researcher" << endl; break;
    }

  
}
