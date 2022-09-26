#include "main.h"
#include <stddef.h>
/**
 * _strstr - function to locate a substring
 * @haystack: string
 * @needle: substring to be located
 * Return: pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
		return (NULL);
}
