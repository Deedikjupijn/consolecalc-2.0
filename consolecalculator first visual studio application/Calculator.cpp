#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper) //switch case for the calculator, here you can add more operations.
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case 'x':
		return x * y;
	case 'X':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}
