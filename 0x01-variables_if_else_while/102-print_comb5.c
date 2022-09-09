#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 * Return: Always 0.
*/
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 98; digit2++)
	{
		for (digit2 = 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit2 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 98 && digit2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

