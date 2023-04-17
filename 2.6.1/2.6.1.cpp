#include <iostream>
#include "Calculate.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    int y;
    int z;
    std::cout << "Введите первое число : ";
    std::cin >> x;
    std::cout << "Введите второе число : ";
    std::cin >> y;
    std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
    std::cin >> z;
    switch (z)
    {
    case 1:
        std::cout << x << " + " << y << " = " << addition(x, y) << "\n";
        break;
    case 2:
        std::cout << x << " - " << y << " = " << subsraction(x, y) << "\n";
        break;
    case 3:
        std::cout << x << " * " << y << " = " << multiplication(x, y) << "\n";
        break;
    case 4:
        std::cout << x << " / " << y << " = " << division(x, y) << "\n";
        break;
    case 5:
        std::cout << x << " в степени " << y << " = " << exponentiation(x, y) << "\n";
        break;
    default:
        break;
    }
}