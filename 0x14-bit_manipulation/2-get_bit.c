#include "main.h"
/**
 * get_bit - gets a bit, 1 or 0, at index
 *
 * @n: number to get bit from
 *
 * @index: index to find bit at
 *
 * Return: 1 or 0 depending if bit is lit or not
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
