#include "chapter3_exercise3.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>

void chapter3_exercise3() {
    long number = 0;
    char digit;

    std::cout << "Enter a number: ";

    
    for (int i = 0; i < 6; ++i) {
        digit = _getche();      
        if (digit < '0' || digit > '9') { 
            std::cout << "\nError: incorrect number!" << std::endl;
            exit(0);
        }
        number = number * 10 + (digit - '0'); 
    }

    std::cout << "\nYour number is: " << number << std::endl;

   
}
