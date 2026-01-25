#include "chapter4_exercise8.h"
#include <iostream>
using namespace std;

struct fraction {
    int num;
    int den;
};

void chapter4_exercise8() {
    fraction f1, f2, result;

    cout << "Enter first fraction (numerator and denominator): ";
    cin >> f1.num >> f1.den;

    cout << "Enter second fraction (numerator and denominator): ";
    cin >> f2.num >> f2.den;

    // Складання дробів
    result.num = f1.num * f2.den + f2.num * f1.den;
    result.den = f1.den * f2.den;

    cout << "Sum = " << result.num << "/" << result.den << endl;

}
