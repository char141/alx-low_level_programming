#include "main.h"
/**
 * char *_strcpy - function to copy a string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
