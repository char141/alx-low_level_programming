#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer
 *@n: integer to be checked
 *Return: Always 0
*/
int _abs(int)
{
	int n;

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
