#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

static const int INPUT = 7;

int main(void)
{
	int result = 1;

	for (int i = 1; i <= INPUT; i++)
	{
		result *= i;
	}

    printf("%i! = %i\n", INPUT, result);
    return 0;
}