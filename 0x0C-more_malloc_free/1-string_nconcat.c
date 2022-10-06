#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function to concacenatetwo strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to be concacenated
 * Return: pointer to new memory with s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat, *concat2;
	unsigned int i = 0, s1size = 0, s2size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1size))
		s1size++;
	while (*(s2 + s2size))
		s2size++;
	if (n >= s2size)
		n = s2size;
	concat = malloc(sizeof(char) * (s1size + s2size + 1));
	if (concat == NULL)
		return (NULL);
	concat2 = concat;
	while (*s1)
		*concat++ = *s1++;
	while (i < n)
	{
		*concat++ = *s2++;
		i++;
	}
	concat[i] = '\0';
	return (concat2);
}
