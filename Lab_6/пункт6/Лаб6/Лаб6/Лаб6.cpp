#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    //6
    float h1;
    cout << "6. Задайте значение А\n";
    cin >> h1;
    float h2;
    h2 = h1 * h1;
    h1 = h2 * h2;
    h2 = h1 * h1;
    cout << "A в восьмой степени равно " << h2 << endl << endl;
}