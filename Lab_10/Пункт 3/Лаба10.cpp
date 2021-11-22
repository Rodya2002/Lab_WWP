#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	scanf("%d", &a);
	if (a > 9 & a < 100 & a % 2 == 0)
		printf("Да");
	else
		printf("Нет");
}