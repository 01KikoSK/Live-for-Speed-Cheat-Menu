#include <iostream>
#include <windows.h>

void cheatMenu() {
    int choice;
    while (true) {
        system("cls");
        std::cout << "Live for Speed Cheat Menu" << std::endl;
        std::cout << "1. God Mode" << std::endl;
        std::cout << "2. Infinite Nitro" << std::endl;
        std::cout << "3. Teleport" << std:endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // God Mode code here
                break;
            case 2:
                // Infinite Nitro code here
                break;
            case 3:
                // Teleport code here
                break;
            case 4:
                exit(0);
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                Sleep(2000);
        }
    }
}

int main() {
    cheatMenu();
    return 0;
}