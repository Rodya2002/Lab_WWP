#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A, B, C;
    double temp1, temp2;

    //1
    std::cout << "Поменяeм местами содержимое переменных A и B\n";
    std::cout << "Введите значение переменной А\n";
    std::cin >> A; //1
    std::cout << "Введите значение переменной B\n";
    std::cin >> B; //0

    temp1 = A;
    A = B;
    B = temp1;

    std::cout << "Значение переменной А - " << A << " Значение переменной В - " << B << "\n\n";
    std::cout << "Поменяeм местами содержимое переменных A, B и С. A в C, C — в B, B — в A\n";
    std::cout << "Введите значение переменной А\n";
    std::cin >> A;
    std::cout << "Введите значение переменной B\n";
    std::cin >> B;
    std::cout << "Введите значение переменной C\n";
    std::cin >> C;

    temp1 = C;
    C = A;
    temp2 = B;
    B = temp1;
    A = temp2;

    std::cout << "Значение переменной А - " << A << " Значение переменной В - " << B << " Значение переменной C - " << C << "\n\n";
}