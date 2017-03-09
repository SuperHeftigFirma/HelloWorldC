#include <stdlib.h>
#include "io.h"

int main()
{
	int x;
	int y;

	x = readNumber();
	y = readNumber();

	writeAnswer(x + y);

	return EXIT_SUCCESS;
}
