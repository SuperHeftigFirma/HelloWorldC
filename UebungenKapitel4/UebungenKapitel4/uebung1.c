#include "functions.h"
#include <stdio.h>

void uebung1()
{
	int smaller;
	int bigger;

	printf("Gebe eine natuerliche Zahl ein: ");
	scanf_s(" %d", &smaller);

	printf("Gebe eine groessere natuerliche Zahl ein: ");
	scanf_s(" %d", &bigger);
	
	if (smaller > bigger)
	{
		int temp;

		temp = smaller;

		smaller = bigger;
		bigger = temp;

		printf("Glaub mal ja nicht, dass mir nicht aufgefallen ist, was du da tust!\n");
	} //temp dies here

	printf("\nDie groessere Zahl lautet: %d", bigger );
	printf("\nDie kleinere Zahl lautet: %d", smaller);

} //smaller and bigger die here