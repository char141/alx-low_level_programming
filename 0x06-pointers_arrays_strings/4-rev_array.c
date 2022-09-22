#include "main.h"
/**
 * reverse_array - function to reverse an array of integers
 * @a: points to a string to be reversed
 * @n: number of elements in a string
 * Return: reversed string
 */
void reverse_array(int *a, int n)
{
	int i, counter;

	for (i = 0; i < n; i++)
	{
		n--;
		counter = a[i];
		a[i] = a[n];
		a[n] = counter;
	}
}
