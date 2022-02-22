#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <ctype.h>

//Geht nicht !!!

int main() {
	char input[201];
	printf("Geben Sie eine Text ein: ");
	fgets(&input, 200, stdin);
	char cloneInput = tolower(input);
	int length = strlen(input) - 2;

	strcpy(input, cloneInput);

	for (int i = 0; i < length / 2; i++)
	{
		char temp = input[i];
		input[i] = input[length - i];
		input[length - i] = temp;
	}
	printf("%s", input);
	
	for (int i = 0; i <= length; i++)
	{
		if (cloneInput[i] != input[i])
		{
			printf("Die Eingabe ist kein Palindrom");
			return 0;
		}
	}
	printf("Die Eingabe ist ein Palindrom");
	return 0;
}