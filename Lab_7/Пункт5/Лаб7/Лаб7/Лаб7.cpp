#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A, B, C;
    double temp1, temp2;
    double x, y;

    //5
    std::cout << "Найдем значение выражения y = 4(x-3)^6 - 7(x-3)^3 + 2 \n";
    std::cout << "Введите значение x\n";
    std::cin >> x;

    y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;

    std::cout << "Ответ: " << y << "\n\n";

}