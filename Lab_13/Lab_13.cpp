#include <iostream>
#include <Windows.h>
#include <cmath>

int one()
{
    std::cout << "1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.\n";
    std::cout << "Введите стоимость 1 кг конфет\n";

    float cost;
    std::cin >> cost;

    for (float i = 0.1; i <= 1.1; i += 0.1)
    {
        std::cout << i << " килограмм конфет стоит " << i * cost << "\n";
    }

    std::cout << "\n\n";

    return 0;
}

int two()
{
    std::cout << "2. Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).\n";
    std::cout << "Введите N\n";

    int N;

    std::cin >> N;

    float out_num = 1;
    float temp = 1;

    //std::cin >> N;


    for (int i = 1; i <= N; i += 1)
    {

        temp += 0.1;

        out_num *= temp;
    }

    std::cout << out_num;

    std::cout << "\n\n";

    return 0;
}

int three()
{
    std::cout << "3. Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы\n";
    std::cout << "Введите N\n";

    int N;

    std::cin >> N;

    int Result = 0;
    for (int i = 1; i <= (2 * N - 1); i += 2)
    {
        Result += i;
    }

    std::cout << Result;

    std::cout << "\n\n";

    return 0;
}

int four()
{
    std::cout << "4. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN\n";
    std::cout << "Введите A и N\n";

    float A;
    int N;

    std::cin >> A;
    std::cin >> N;
    
    float Result = 1;

    for (int i = 1; i <= N; i++)
    {
        Result += pow(A, i);
    }

    std::cout << Result;

    std::cout << "\n\n";

    return 0;
}

int five()
{
    std::cout << "5. Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 1 − A + A2 − A3 + . ..± AN .\nУсловный оператор не использовать.\n";
    std::cout << "Введите A и N\n";

    float A;
    int N;

    std::cin >> A;
    std::cin >> N;

    float Result = 1;

    for (int i = 1; i <= N; i++)
    {
        Result += pow(A, i) * pow(-1, i);
    }

    std::cout << Result;

    std::cout << "\n\n";

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

    return 0;
}