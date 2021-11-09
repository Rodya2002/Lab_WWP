#define _CRT_SCURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%f", (c - a) * (b - c));
}