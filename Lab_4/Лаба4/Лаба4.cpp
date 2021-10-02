#include <iostream>;
using namespace std;

int main()
{
	//Пункт 1 
	double a, b;

	cout << "Wwedite dliny storon pryamougolnika a i b" << endl;

	cin >> a; 
	cin >> b;

	cout << "Ploshad = " << a * b << endl;
	cout << "Perimetr = " << 2 * (a + b) << endl << endl;

	//Пункт 2 

	double Pi = 3.14;
	double D;

	cout << "Wwedite diametr okruzhosti" << endl;

	cin >> D;

	cout << "Dlina okruzhosti = " << Pi * D << endl <<endl;

	//Пункт 3

	cout << "Nayti srednee arifmeticheskoe" << endl;

	cin >> a;
	cin >> b;

	cout << "Srednya arifmeticheskay = " << (a + b) / 2 << endl <<endl;
	
	//Пункт 4

	cout << "Nayti summu, rasnosty, proisvedenie i chastnoe kvadratov a i b" << endl << "Wwedite a i b" << endl;

	cin >> a >> b; 

	a = a * a;
	b = b * b; 

	cout << "summa kvadratov = " << a + b << endl << "rasnosty kvadratov = " << a - b << endl << "Proisvedenie kvadratov = " << a * b << endl << "chastnoe kvadratov = " << a / b << endl;

	//Пункт 5 

	cout << "Nayti summu, rasnosty, proisvedenie i chastnoe modylei a i b" << endl << "Wwedite a i b" << endl;

	cin >> a >> b;

	a = abs(a);
	b = abs(b);

	cout << "summa modylei = " << a + b << endl << "rasnosty modylei = " << a - b << endl << "Proisvedenie modylei = " << a * b << endl << "chastnoe modylei = " << a / b << endl;



	return 0;
}