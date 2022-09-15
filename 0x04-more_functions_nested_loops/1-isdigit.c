#include "main.h"

/**
 * _isdigit - function that checs if c is a0-9 digit
 * @c: entry to be ckecked
 * Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 4 && c <= 57)
		return (1);
	else
		return (0);
}
