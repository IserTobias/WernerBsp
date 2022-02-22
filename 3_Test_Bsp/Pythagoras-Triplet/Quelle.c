#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int main(void)
{

	for (int a = 0; a < 1000; a++)
	{
		for (int b = 0; b < 1000; b++)
		{
			int c = sqrt(a * a + b * b);
			if (a+b+c == 1000 && a < b && b < c)
			{
				printf("a = %i, b = %i, c = %i", a, b, c);
				printf("Produkt: %i", a * b * c);
				return 0;
			}
		}
	}
}