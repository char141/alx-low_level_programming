#include "main.h"
/**
 *print_last_digit - outputs the last digit of a number
 *@number: number to be checked
 *Return: Always 0
*/
int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
