#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    //7
    float he1;
    cout << "7. Задайте значение А\n";
    cin >> he1;
    float he2;
    float he3;
    he2 = he1 * he1 * he1;
    he3 = he2 * he2;
    he2 = he3 * he3 * he2;
    cout << "A в пятнадцатой степени равно " << he2 << endl << endl;
}
