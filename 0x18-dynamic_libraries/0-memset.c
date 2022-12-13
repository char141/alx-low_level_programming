#include "main.h"
/**
 * _memset -  function to fill memory with a constant byte
 * @s: memory region with the byte to be filled
 * @n: bytes to be filled
 * @b: constant byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
