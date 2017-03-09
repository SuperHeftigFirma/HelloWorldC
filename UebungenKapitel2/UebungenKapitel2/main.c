#include <stdio.h>
#include <stdlib.h>

#include "menu.h"


int main()
{
	int x;
	do
	{
		x = 0;
		printf("Waehle eine Uebung aus:\n");
		printf("[1] Primzahlen.\n");
		printf("[2] Taschenrechner.\n");
		printf("[3] Fallender Koerper.\n");
		printf("[0] -- Ende --\n");
		scanf_s("%d", &x);
		
		if (x == 1)
			uebung1();
		if (x == 2)
			uebung2();
		if (x == 3)
			uebung3();
	} while (x);
	
	return EXIT_SUCCESS;
}

