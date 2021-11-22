#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n % 100 == 0)
		printf("%d", n / 100);
	else 
		printf("%d", n / 100 + 1);
}