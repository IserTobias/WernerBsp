#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int ersteZahl;
	char operation;
	int zweiteZahl;
	int ergebnis;
	printf("Geben Sie die Rechnung ein (Format: Zahl1 Operant Zahl2): ");
	scanf("%i %c %i", &ersteZahl, &operation, &zweiteZahl);

	if (operation == '+')
	{
		ergebnis = ersteZahl + zweiteZahl;
	}
	else if (operation == '-') 
	{
		ergebnis = ersteZahl - zweiteZahl;
	}
	else if (operation == '*')
	{
		ergebnis = ersteZahl * zweiteZahl;
	}
	else if (operation == '/' && zweiteZahl != 0) 
	{
		ergebnis = ersteZahl / zweiteZahl;
	}
	else if (operation == '^')
	{
		ergebnis = pow(ersteZahl, zweiteZahl);
	}
	else
	{
		printf("Die Eingabe war ungültig!");
		return 0;
	}

	printf("Das Ergebniss ist: %i", ergebnis);
	return 0;
}
