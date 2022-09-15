#include "main.h"

/**
* print_line - function o print a line
* @n: is the integer for the paramaters of my function
* Return: 0
*/

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
