#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, n, m, k;
	scanf("%d", &a);
	n = a % 10;
	m = a / 10 % 10;
	k = a / 100;
	if ((n<m&m<k)|(n>m&m>k))
		printf("Да");
	else
		printf("Нет");
}