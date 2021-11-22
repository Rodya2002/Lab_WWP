#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a*a+b*b==c*c)|(a*a+c*c==b*b)|(b*b+c*c==a*a))
		printf("Да");
	else
		printf("Нет");
}