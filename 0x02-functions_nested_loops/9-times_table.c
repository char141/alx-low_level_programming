#include "stdio.h"
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: times table
*/
void times_table(void)
{
	int num1, num2, product;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			product = num1 * num2;
			if (num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (num2 == 0)
			{
				_putchar('0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (num2 != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
