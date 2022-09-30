#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function to search for a set of bytes in a string
 * @s: string
 * @accept: set of bytes to be searched
 * Return: pointer to the bytws that match bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
