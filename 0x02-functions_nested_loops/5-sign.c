#include "main.h"
/**
 * main - prints the sign of a number
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n ==0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar(-1);
		_putchar('-');
	}
	return (0);
}
