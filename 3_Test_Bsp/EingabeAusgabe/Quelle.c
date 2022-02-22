#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	char input[201];
	printf("Bitte gib dein Alter ein: ");
	fgets(input, 200, stdin);
	if (atoi(&input) == 0)
	{
		printf("Falsche Eingabe");
	}
	else if (atoi(&input) < 18)
	{
		printf("Du bist minderjährig");
	}
	else
	{
		printf("Du bist volljährig");
	}
}