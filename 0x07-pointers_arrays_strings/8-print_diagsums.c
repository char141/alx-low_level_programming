#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function to print the sum of two diagonals
 * in an integer square matrix
 * @a: array name
 * @size: size of array
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (i < (size * size))
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}
	while (j < (size * size - 1))
	{
		sum2 += a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
