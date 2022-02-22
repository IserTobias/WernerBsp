#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int randInt = rand() % 101;
	
	if (randInt >= 0 && randInt <= 58)
	{
		printf("Verloren!");
	}
	else
	{
		printf("Gewonnen!");
	}

	char name[201];
	char sex;
	int age;
	
	printf("Geben Sie ihren Namen ein: ");
	fgets(name, 200, stdin);
	
	printf("Geben Sie ihr Alter ein: ");
	scanf("%i", &age);

	printf("Geben Sie m für Mann und f für Frau ein: ");
	sex = fgetchar();

	if (age > 18)
	{
		if (sex == 'm')
		{
			printf("Guten Tag Herr %s!", name);
		}
		else if (sex == 'f')
		{
			printf("Guten Tag Frau %s!", name);
		}
		else
		{
			printf("Fehler bei der Eingabe!");
			return 0;
		}
	}
	else if(age < 18 && age >= 0)
	{
		printf("Hallo %s!", name);
	}

	// Punkt 3 hab ich mir gespart...
	// Man subtrahiert getippte Zahl und mach das Ergebniss positiv
	// dann schaut man welche Zahl kleiner ist und je nach dem hat einer Gewonnen bzw. es ist ein Unentischieden
}