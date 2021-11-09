#define _CRT_SCURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int x1, x2, y1, y2;
	float n;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	n = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("p=%f s=%f", n + fabs(x1 - x2) + fabs(y1 - y2), fabs(x1 - x2) * fabs(y1 - y2) / 2);
}