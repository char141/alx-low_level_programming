#include "main.h"
/**
 * string_toupper - function that changeslowercase letters to uppercase
 * @s: string to change
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] += (66 - 97);
	}
	return (s);
}
