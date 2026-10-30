
#include "boklo.h"

#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

double squareArea(double a) {
    return a * a;
}

double squarePerimeter(double a) {
    return 4.0 * a;
}

double squareDiagonal(double a) {
    return a * std::sqrt(2.0);
}

void runSquareModule() {
    double side = 0.0;

    std::cout << "\n===== РАСЧЕТ КВАДРАТА =====\n";
    std::cout << "Введите длину стороны: ";

    if (!(std::cin >> side)) {
        std::cin.clear();
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n'
        );

        std::cout << "Ошибка: необходимо ввести число.\n";
        return;
    }

    if (side <= 0.0) {
        std::cout << "Ошибка: сторона должна быть положительной.\n";
        return;
    }

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Площадь: "
              << squareArea(side) << '\n';

    std::cout << "Периметр: "
              << squarePerimeter(side) << '\n';

    std::cout << "Диагональ: "
              << squareDiagonal(side) << '\n';
}
