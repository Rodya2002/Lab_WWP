#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, n, m, k, v, s ;
	scanf("%d", &a);
	n = a % 10;
	m = a / 10 % 10;
	k = a / 100 %10;
	v = a / 1000;
	s = n * 1000 + k * 10 + v;
	
	if (s==a)
		printf("Да");
	else
		printf("Нет");
}