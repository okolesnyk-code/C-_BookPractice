#include <iostream>
using namespace std;

void chapter2_exercise9() {
    int a, b, c, d;
    char slash; 

    cout << "Enter first fraction: ";
    cin >> a >> slash >> b;

    cout << "Enter second fraction: ";
    cin >> c >> slash >> d;

   
    int numerator = a * d + b * c; 
    int denominator = b * d;      

    cout << "Sum: " << numerator << "/" << denominator << endl;

    return 0;
}