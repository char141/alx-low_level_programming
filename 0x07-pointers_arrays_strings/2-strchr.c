#include "main.h"
/**
 * _strchr - function to locate a character in a string
 * @s: string 
 * @c: character to be located
 * Return: pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
