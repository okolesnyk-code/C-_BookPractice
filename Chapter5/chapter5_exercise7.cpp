#include "chapter5_exercise7.h"
#include <iostream>
#include <cmath> // для pow()
using namespace std;

// Function declarations (overloaded)

// For double
double power(double n, int p = 2);

// For float
float power(float n, int p = 2);

// For int
int power(int n, int p = 2);

// For long
long power(long n, int p = 2);

// For char
int power(char n, int p = 2); // char перетворюємо на int при обчисленні

// Exercise function
void chapter5_exercise7()
{
    double d = 3.5;
    float f = 2.2f;
    int i = 4;
    long l = 5L;
    char c = 3; // character code 3

    cout << "power(double): " << power(d) << endl;
    cout << "power(float): " << power(f, 3) << endl;
    cout << "power(int): " << power(i) << endl;
    cout << "power(long): " << power(l, 4) << endl;
    cout << "power(char): " << power(c) << endl;
}

// Function definitions

double power(double n, int p)
{
    return pow(n, p);
}

float power(float n, int p)
{
    return pow(n, p);
}

int power(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++)
        result *= n;
    return result;
}

long power(long n, int p)
{
    long result = 1;
    for (int i = 0; i < p; i++)
        result *= n;
    return result;
}

int power(char n, int p)
{
    int result = 1;
    int val = static_cast<int>(n);
    for (int i = 0; i < p; i++)
        result *= val;
    return result;
}
