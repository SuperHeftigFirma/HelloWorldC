#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int getInput()
{
	int input;

	printf("Gebe eine natuerliche Zahle ein: ");
	scanf_s("%d", &input);

	return input;
}

bool isEven(int x)
{
	if (x % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

void uebung1()
{
	int input;

	input = getInput();

	isEven(input) ? 
		printf("Die eingegebene Zahl ist gerade!\n") : 
		printf("Die eingegebene Zahl ist ungerade!\n");
}