
#include <iostream>
#include <limits>

#include "boklo.h"
#include "second.h"

int main() {
    int choice = -1;

    do {
        std::cout << "\n========== TEAM PROJECT ==========\n";
        std::cout << "1. Расчеты квадрата\n";
        std::cout << "2. Расчеты круга\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите действие: ";

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "Ошибка: введите номер пункта меню.\n";
            continue;
        }

        switch (choice) {
            case 1:
                runSquareModule();
                break;

            case 2:
                runCircleModule();
                break;

            case 0:
                std::cout << "Завершение программы.\n";
                break;

            default:
                std::cout << "Неверный пункт меню.\n";
        }

    } while (choice != 0);

    return 0;
}
