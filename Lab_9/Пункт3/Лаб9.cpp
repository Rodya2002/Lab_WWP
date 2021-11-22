#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k,n,d;
	scanf("%d", &k, &n);
	
	if (n == 1)
	{
		d = k % 7;
		if (d == 0)
			d = 7;
		printf("%d", d);
	}
	else if (n==2)
		{
			d = k % 7+1;
			if (d == 0)
				d = 7;
			printf("%d", d);
		}
	else if (n == 3)
	{
		d = k % 7 + 2;
		if (d > 7)
			d = d % 7;
		if (d == 0)
			d = 7;
		printf("%d", d);
	}
	else if (n == 4)
	{
		d = k % 7 + 3;
		if (d > 7)
			d = d % 7;
		if (d == 0)
			d = 7;
		printf("%d", d);
	}
	else if (n == 5)
	{
		d = k % 7 + 4;
		if (d > 7)
			d = d % 7;
		if (d == 0)
			d = 7;
		printf("%d", d);
	}
	else if (n == 6)
	{
		d = k % 7 + 5;
		if (d > 7)
			d = d % 7;
		if (d == 0)
			d = 7;
		printf("%d", d);
	}
	else if (n == 7)
	{
		d = k % 7 + 6;
		if (d > 7)
			d = d % 7;
		if (d == 0)
			d = 7;
		printf("%d", d);
	}
}