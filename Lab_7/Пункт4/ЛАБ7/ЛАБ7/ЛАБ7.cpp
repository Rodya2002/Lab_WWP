#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A, B, C;
    double temp1, temp2;
    double y, x = 0;

    std::cout << "Найдем значение выражения y = 3x^6 - 6x^2 - 7\n";
    std::cout << "Введите значение x\n";
    std::cin >> x;

    y = 3.0 * pow(x, 6) -  pow(x, 2) - 7;

    std::cout << "Ответ: " << y << "\n\n";
}
