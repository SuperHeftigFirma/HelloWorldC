#include <stdio.h>

double getDouble()
{
	double x;
	printf("Gib eine Fliesskommazahl ein : ");
	scanf_s("%lf", &x);

	return x;
}

char getOperator()
{
	char op;
	printf("Welche Rechenoperation (+, -, *, /) soll ausgefuehrt werden? ");
	scanf_s(" %c", &op, 1);

	return op;
}

double printResult(double x, double y, char op)
{
	switch (op)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		printf("Ungueltiger Operator: %c", op);
		return -1;
	}
}

void uebung2()
{
	double x = getDouble();
	double y = getDouble();
	char op = getOperator();

	printf("Das Ergebnis ist: %.2lf %c %.2lf = %.2lf\n", x, op, y, printResult(x, y, op));
}