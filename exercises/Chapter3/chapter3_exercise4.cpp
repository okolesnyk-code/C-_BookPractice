#include "chapter3_exercise4.h"
#include <iostream>

void chapter3_exercise4()
{
    double a, b;
    char op;
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        std::cout << "Enter first operand, operator and second operand: ";
        std::cin >> a >> op >> b;

        double result = 0.0;
        bool valid = true;

        switch (op)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
                result = a / b;
            else
            {
                std::cout << "Error: division by zero\n";
                valid = false;
            }
            break;
        default:
            std::cout << "Error: unknown operator\n";
            valid = false;
        }

        if (valid)
            std::cout << "The result is " << result << std::endl;

        std::cout << "Perform another operation (y/n)? ";
        std::cin >> again;
    }
}
