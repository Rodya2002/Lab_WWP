#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //3
    int c3;
    cout << "3. Введите значение переменной a\n";
    cin >> c3;
    int a3;
    cout << "Введите значение переменной b\n";
    cin >> a3;
    int b3;
    cout << "Введите значение переменной c\n";
    cin >> b3;
    cout << "Теперь значение переменной a равно " << a3 << ", переменной b — " << b3 << ", a переменной с — " << c3 << endl << endl;
}