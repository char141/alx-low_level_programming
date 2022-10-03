#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: initial string
 * Return: NULL or pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	copy = malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	copy[len] = '\0';
	return (copy);
}
