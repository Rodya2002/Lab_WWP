#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a,b,c,n,m,k,s;
	scanf("%d %d %d", &a,&b,&c);
	n = a / c * c;
	m = b / c * c;
	k = n * m / (c * c);
	s = a * b - m * n;
	printf("k=%d, s=%d", k, s);
}