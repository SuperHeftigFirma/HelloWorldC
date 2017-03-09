#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
	int input = 1;

	while (input > 0)
	{
		printf("\n\nWaehle einen Menuepunkt aus:\n");
		printf("(1) Welche Zahl ist groesser?\n");
		printf("(0) Programm beenden.\n");

		scanf_s("%d", &input);

		switch (input)
		{
		case(1):
			uebung1();
			break;
		default:
			break;
		}
	}
	return EXIT_SUCCESS;
}