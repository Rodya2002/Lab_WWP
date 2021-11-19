#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A, B, C;
    double temp1, temp2;




    //6
    double a;
    double powa;

    std::cout << "Введите значение А\n";
    std::cin >> a;

    powa = a * a;

    std::cout << "Значение А в 8 степени = " << powa * powa * powa * powa << "\n\n";
}