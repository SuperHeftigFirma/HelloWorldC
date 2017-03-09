#include <stdio.h>
#include "functions.h"

int uebung2_getInput()
{
	int input;

	printf("Gebe eine natuerliche Zahle zwischen 1 und 255 ein: ");
	scanf_s("%d", &input);

	return input;
}

void convertIntoBinary(int x)
{
	printf("Die Zahl lautet im binaeren Zahlensystem (in umgekehrter Reihenfolge: ");
	
	do
		{
		printf("%d", x % 2);
		x /= 2;
		} while (x > 0);
		
	printf("\n");
}

void uebung2()
{
	int input;

	input = uebung2_getInput();

	convertIntoBinary(input);
}