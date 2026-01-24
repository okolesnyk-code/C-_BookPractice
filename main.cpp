#include <iostream>

// Підключаємо заголовки меню всіх глав
#include "exercises/Chapter2/chapter2.h"
#include "exercises/Chapter3/chapter3.h"

// ... далі підключати інші глави до chapter16.h

int main()

{
    int chapterChoice = -1;

    while (true)
    {
        std::cout << "\nSelect chapter to view:\n\n";
        std::cout << "2 - Chapter 2\n";
        std::cout << "3 - Chapter 3\n";
        //std::cout << "3 - Chapter 3\n";
        // ... додати до 16 глави
        std::cout << "0 - Exit\n";

        std::cout << "\nEnter choice: ";
        std::cin >> chapterChoice;

        switch (chapterChoice)
        {
        case 2: chapter2_menu(); break;
        case 3: chapter3_menu(); break;
        //case 3: chapter3_menu(); break;
            // ... додати до 16 глави
        case 0:
            std::cout << "Exiting program...\n";
            return 0;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    }
}