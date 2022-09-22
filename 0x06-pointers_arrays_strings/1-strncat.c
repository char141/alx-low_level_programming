#include "main.h"
/**
 * _strncat - function that concacenates two strings
 * @dest: append to
 * @src: append from
 * @n: bytes used
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		dest[n + i] = '\0';
		i++;
		J++;
	}
	return (dest);
}
