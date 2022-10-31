#include "main.h"
/**
 * clear_bit - sets a bit at given index to 0
 *
 * @n: number to set bit in
 * 
 * @ndex: index to set bit at
 *
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
