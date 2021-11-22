#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, d;
	scanf("%d", &x);
	d = x % 10 * 10 + x / 10;
	printf("%d", d);
}