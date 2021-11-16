#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    //5
    float x5;
    cout << "5. Задайте значение x\n";
    cin >> x5;
    double y5 = 4 * (pow(x5 - 3, 6)) - 7 * (pow(x5 - 3, 3)) + 2;
    cout << "Значение функции равно " << y5 << endl << endl;
}