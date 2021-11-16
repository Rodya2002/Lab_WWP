#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //1
    int B;
    cout << "1. Введите значение переменной a\n";
    cin >> B;
    int A;
    cout << "Введите значение переменной b\n";
    cin >> A;
    cout << "Теперь значение переменной a равно " << A << ", а переменной b — " << B << endl << endl;
}