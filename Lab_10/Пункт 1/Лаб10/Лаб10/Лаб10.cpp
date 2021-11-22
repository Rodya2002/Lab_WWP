#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a,b;
	scanf("%d %d", &a, &b);
	if (a > 2 & b <= 3)
		printf("Справедливые неравенства А>2 и В <=3");
	else
		printf("Нет");
}
