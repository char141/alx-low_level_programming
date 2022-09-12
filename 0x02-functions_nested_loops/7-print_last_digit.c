#include "main.h"
/**
 * main - outputs the last digit of a number
*/
int print_last_digit(int)
{
	int number;

	last_digit = number % 10;

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');
	return (0);
}
