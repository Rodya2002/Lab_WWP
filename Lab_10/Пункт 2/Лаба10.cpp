#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a <b & b>c)
		printf("Справедливые неравенства А<В<С");
	else
		printf("Нет");
}
