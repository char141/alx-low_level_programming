#include "main.h"
#include <stdio.h>
/**
 * is_divisible - function to check if a number is divisible
 * @num: number to be checked
 * @div: divisor
 * Return: 0 if divisible, 1 otherwise
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
