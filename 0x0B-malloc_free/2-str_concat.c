#include <stdlib.h>
#include "main.h"
/**
 * str_concat- function that concacenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or pointer to the newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new_str[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		new_str[j++] = s2[i];
	return (new_str);
}
