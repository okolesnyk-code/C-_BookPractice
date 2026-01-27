#include "chapter5_exercise10.h"
#include <iostream>
using namespace std;

// Global variable to store the call count
int callCountGlobal = 0;

// Function using global variable
void showCallCountGlobal()
{
    callCountGlobal++;
    cout << "Function called (global): " << callCountGlobal << " times" << endl;
}

void chapter5_exercise10()
{
    for (int i = 0; i < 10; i++)
        showCallCountGlobal();
}
