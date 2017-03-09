#include <stdio.h>

int readNumber()
{
	int x;

	printf("Bitte geben Sie eine Zahl ein.\n");
	scanf_s("%d", &x);

	return x;
}

void writeAnswer(int x)
{
	printf("Die Summe der eingegebenen Zahlen ist: %d\n", x);
}