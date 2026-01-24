#include "chapter2_exercise1.h"
#include <windows.h>
#include <iostream>
using namespace std;

void chapter2_exercise1() {

    SetConsoleCP(65001);        // Кодування для введення з клавіатури (CP1251 – для кирилиці)
    SetConsoleOutputCP(65001);  // Кодування для виведення на консоль

    const float coefficient = 1.0f / 7.481f;
    float gallons;

    cout << "Введіть потрібну кількість галонів:: ";
    cin >> gallons;

    cout << endl << "Еквівалент у кубічних футах: " << gallons * coefficient << endl;
}
