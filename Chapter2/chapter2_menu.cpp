#include <iostream>
#include "chapter2.h"

void chapter2_menu()
{
    int choice;

    while (true)
    {
        std::cout << "\nChapter 2\n";
        std::cout << "----------------\n";

        for (int i = 1; i <= 12; ++i)
            std::cout << i << " - Exercise " << i << '\n';

        std::cout << "0 - Back\n";
        std::cout << "Choose exercise: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:  exercise1(); break;
        case 2:  exercise2(); break;
        case 3:  exercise3(); break;
        case 4:  exercise4(); break;
        case 5:  exercise5(); break;
        case 6:  exercise6(); break;
        case 7:  exercise7(); break;
        case 8:  exercise8(); break;
        case 9:  exercise9(); break;
        case 10: exercise10(); break;
        case 11: exercise11(); break;
        case 12: exercise12(); break;
        case 0:  return;
        default:
            std::cout << "Invalid choice\n";
        }
    }
}
