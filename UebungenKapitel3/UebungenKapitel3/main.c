#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main()
{
	int input = 1;

	while (input > 0)
	{
		printf("\nWaehle einen Menuepunkt aus:\n");
		printf("(1) Gerade oder Ungerade Zahlen\n");
		printf("(2) Dezimal-zu-Binaer-Konverter\n");
		printf("(0) Programm beenden.\n");
		scanf_s("%d", &input);

		switch (input)
		{
		case(1):
			uebung1();
			break;
		case(2):
			uebung2();
			break;
		default:
			break;
		}
	}

	return EXIT_SUCCESS;
}