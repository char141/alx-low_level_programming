#include "main.h"
#include <stdio.h>
/**
 * factorial - prints the factoria of a number
 * @n: number
 * Return: -1 if n<0, or an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
