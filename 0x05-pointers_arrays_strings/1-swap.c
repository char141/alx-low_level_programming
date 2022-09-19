#include "main.h"
/**
 * swap_int - function to swap two integers
 * @a: first input
 * @b: second input
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
