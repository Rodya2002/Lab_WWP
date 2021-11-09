#define _CRT_SCURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int x1, x2, x3, y1, y2, y3;
	float s1, s2, s3, p, s;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	s1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	s1 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	s1 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	p = s1 + s2 + s3;
	s = sqrt((p / 2) * (p / 2 - s1) * (p / 2 - s2) * (p / 2 - s3));
	printf("p=%f s=%f", p, s);
}
