#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - finds the power x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: -1 if y>0 or the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
