#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A, B, C;
    double temp1, temp2;
    std::cout << "Поменяeм местами содержимое переменных A, B и С. A в B, B — в C, C — в A";
    std::cout << "Введите значение переменной А\n";
    std::cin >> A;
    std::cout << "Введите значение переменной B\n";
    std::cin >> B;
    std::cout << "Введите значение переменной C\n";
    std::cin >> C;

    temp1 = B;
    B = A;
    temp2 = C;
    C = temp1;
    A = temp2;

    std::cout << "Значение переменной А - " << A << " Значение переменной В - " << B << " Значение переменной C - " << C << "\n\n";
}