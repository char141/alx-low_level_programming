#include "main.h"
/**
 * _memcpy -  function to copy a memory area
 * @dest: copy to
 * @src: copy from
 * @n: bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	insigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
