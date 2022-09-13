#include "main.h"
/**
 * print_sign - prints the sign of a number
 *@n: number to be checked for sign
 Return: 1 if number is greater than zero,
 *	0 is number is zero
 *	-1 if number is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
