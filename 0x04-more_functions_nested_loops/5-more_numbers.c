#include "holberton.h"

/**
 * more_numbers - function that prints numbers ten ts
 * Return: 0
 */

void more_numbers(void)
{
	int i = 0, mul;
	
	for (mul = 0; mul < 10; mul++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0')
		}
		_putchar('\n');
	}
}
