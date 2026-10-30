#include "second.h"

#include <iomanip>
#include <iostream>
#include <limits>

namespace {
    constexpr double PI = 3.14159265358979323846;
}

double circleArea(double r) {
    return PI * r * r;
}

double circleCircumference(double r) {
    return 2.0 * PI * r;
}

void runCircleModule() {
    double radius = 0.0;

    std::cout << "\n===== РАСЧЕТ КРУГА =====\n";
    std::cout << "Введите радиус: ";

    if (!(std::cin >> radius)) {
        std::cin.clear();
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n'
        );

        std::cout << "Ошибка: необходимо ввести число.\n";
        return;
    }

    if (radius <= 0.0) {
        std::cout << "Ошибка: радиус должен быть положительным.\n";
        return;
    }

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Площадь круга: "
              << circleArea(radius) << '\n';

    std::cout << "Длина окружности: "
              << circleCircumference(radius) << '\n';
}