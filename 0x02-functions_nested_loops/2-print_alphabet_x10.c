#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the aphabet letters in lowercase 10 times.
 *Return: x10 a-z
*/
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (alphabet = 'a'; alphabet = 'z'; alphabet++)
	{
		for (i = 0; i <10; i++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
	return (0);
}
