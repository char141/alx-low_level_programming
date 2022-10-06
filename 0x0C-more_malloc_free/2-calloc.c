#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function to allocate memory to an array
 * @nmemb: elements of an array
 * @size: bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memeory;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	filler = memory;
	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (memory);
}
