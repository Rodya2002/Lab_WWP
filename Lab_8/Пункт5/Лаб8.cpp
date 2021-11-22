#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);
	y = x / 100 + x % 100 * 10;
	printf("%d", y);
}