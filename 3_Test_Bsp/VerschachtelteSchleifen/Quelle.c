#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%i x %i = %i\n", j, i, j * i);
		}
	}
}