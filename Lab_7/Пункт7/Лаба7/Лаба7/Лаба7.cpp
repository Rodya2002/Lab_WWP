#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    double A, B, C;
    double temp1, temp2;
    double a, powa;
    //7
    std::cout << "Введите значение А\n";
    std::cin >> a;

    powa = a * a;
    int powpowa = powa * powa;

    std::cout << "Значение А в 15 степени = " << powpowa * powpowa * powpowa * a * a * a << "\n\n";
}