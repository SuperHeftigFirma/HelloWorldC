#include <stdbool.h>
#include <stdio.h>

bool isPrimeNumber(int x)
{
	switch (x)
	{
	case 2:
	case 3:
	case 5:
	case 7:
		return true;
		break;
	default:
		return false;
		break;
	}
}

void uebung1()
{
	int x;
	printf("Gebe eine einstellige natuerliche Zahl ein: ");
	scanf_s("%d", &x);

	if (isPrimeNumber(x))
	{
		printf("Du hast eine einstellige Primzahl eingegeben. :-D\n");
	}
	else
	{
		printf("Du hast keine einstellige Primzahl eingegeben. :'(\n");

	}
}