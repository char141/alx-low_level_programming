#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function to create an array
 * @size: array size
 * @c: initialized character of array
 * Return: array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
