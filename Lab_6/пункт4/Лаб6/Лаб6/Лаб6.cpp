#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");
    //4
    float x4;
    cout << "4. Задайте значение x\n";
    cin >> x4;
    double y4 = 3 * (pow(x4, 6)) - 6 * (pow(x4, 2)) - 7;
    cout << "Значение функции равно " << y4 << endl << endl;
}