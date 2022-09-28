#include "main.h"
/**
 * _strlen_recursion - function to print the legnth of a string
 * @s: string
 * Return: string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
