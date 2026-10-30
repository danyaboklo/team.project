
#include <iostream>

int main() {
    int choice = -1;

    do {
        std::cout << "\n========== TEAM PROJECT ==========\n";
        std::cout << "1. Расчеты участника 1\n";
        std::cout << "2. Расчеты участника 2\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите действие: ";

        if (!(std::cin >> choice)) {
            std::cout << "Ошибка ввода!\n";
            return 1;
        }

        switch (choice) {
            case 1:
                std::cout << "Модуль участника 1 будет подключен позже.\n";
                break;

            case 2:
                std::cout << "Модуль участника 2 будет подключен позже.\n";
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
