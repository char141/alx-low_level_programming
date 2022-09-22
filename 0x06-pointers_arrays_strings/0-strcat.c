#include "main.h"
#include <stdio.h>
/**
 * _strcat - function to append a string to another
 * @dest: append to
 * @src: append from
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (dest[i] = src[j])
	{
		i++;
		j++;
	}
	return (dest);
}
