#include <iostream>
#include <Windows.h>
#include <cmath>

int one()
{
    int A, B;

    std::cout << "1. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B." << "\n";
    std::cout << "Введите A, B" << "\n";

    std::cin >> A >> B;

    if (A != B)
    {
        if (A > B)
        {
            B = A;
        }
        else
        {
            A = B;
        }
    }
    else
    {
        A = 0;
        B = 0;
    }

    std::cout << A << " " << B << "\n\n";

    return 0;
}

int two()
{
    double A, B, C;

    std::cout << "2. Даны три числа. Найти сумму двух наибольших из них" << "\n";
    std::cout << "Введите A, B, C" << "\n";

    std::cin >> A >> B >> C;

    if (A >= B and C >= B)
    {
        std::cout << A + C << "\n\n";
    }
    else
    {
        if (A >= C and B >= C)
        {
            std::cout << A + B << "\n\n";
        }
        else
        {
            if (B >= A and C >= A)
            {
                std::cout << B + C << "\n\n";
            }
        }
    }



    return 0;
}

int three()
{
    double xA, yA, xB, yB, xC, yC;

    std::cout << "3. На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A." << "\n";
    std::cout << "Введите координаты точек A, B, C в виде xA, yA, xB, yB, xC, yC" << "\n";

    std::cin >> xA >> yA >> xB >> yB >> xC >> yC;

    if (sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB)) < sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC)))
    {
        std::cout << "B " << sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB)) << "\n\n";
    }
    else
    {
        std::cout << "C " << sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC)) << "\n\n";
    }

    return 0;
}

int four()
{
    double X, Y;

    std::cout << "4. Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка" << "\n";
    std::cout << "Введите X, Y" << "\n";

    std::cin >> X >> Y;

    if (X > 0)
    {
        if (Y > 0)
        {
            std::cout << "I" << "\n\n";
        }
        else
        {
            std::cout << "IV" << "\n\n";
        }
    }
    else
    {
        if (Y > 0)
        {
            std::cout << "II" << "\n\n";
        }
        else
        {
            std::cout << "III" << "\n\n";
        }
    }

    return 0;
}

int five()
{
    int A;

    std::cout << "5. Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д." << "\n";
    std::cout << "Введите A" << "\n";

    std::cin >> A;

    std::cout << "A - ";

    if (A == 0)
    {
        std::cout << "нулевое число" << "\n\n";
    }
    else
    {
        if (A > 0)
        {
            std::cout << "положительное ";
        }
        else
        {
            std::cout << "отрицательное ";
        }

        if (A % 2 == 0)
        {
            std::cout << "четное число" << "\n\n";
        }
        else
        {
            std::cout << "нечетное число" << "\n\n";
        }
    }

    return 0;
}

int six()
{
    int A;

    std::cout << "6. Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д." << "\n";
    std::cout << "Введите А" << "\n";

    std::cin >> A;

    std::cout << "A - ";

    if (A % 2 == 0)
    {
        std::cout << "четное ";
    }
    else
    {
        std::cout << "нечетное ";
    }

    if (A / 10 == 0)
    {
        std::cout << "однозначное число" << "\n\n";
    }
    else
    {
        if (A / 10 < 10)
        {
            std::cout << "двузначное число" << "\n\n";
        }
        else
        {
            std::cout << "трехзначное число" << "\n\n";
        }
    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    one();
    two();
    three();
    four();
    five();
    six();

    return 0;
}