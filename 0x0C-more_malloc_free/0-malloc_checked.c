#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function to allocate memory
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
