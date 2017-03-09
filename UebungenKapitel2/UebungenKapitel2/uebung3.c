#include <stdio.h>
#include "constants.h"

double getHeight()
{
	double h;
	printf("Gebe die anfaengliche Hoehe in Metern eines sich in Ruhe befindlichen Koerpers an, der dann unter Vernachlaessigung der Luftreibung zu Boden faellt:\n");
	scanf_s("%lf", &h);

	return h;
}

void printHeight(double h, int i)
{
	printf("Nach %d Sekunden betraegt die Hoehe des Koerpers %.2lf\n", i, h);
}

double calculateNewHeight(double initialHeight, int i)
{
	double distanceFallen;
	distanceFallen =  Constants.g * i * i * 0.5;
	
	return initialHeight - distanceFallen;
}

void uebung3()
{
	const double initialHeight = getHeight();
	int i = 0;
	
	while (calculateNewHeight(initialHeight, i) > 0) {
		printHeight(calculateNewHeight(initialHeight, i), i);
		i++;
	}
}