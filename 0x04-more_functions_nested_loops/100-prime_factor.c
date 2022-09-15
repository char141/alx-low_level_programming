#include <stdio.h>
#include <math.h>

/**
 * main -  program that finds and prints the largest prime factor of a number
 * Return: Always 0.
*/

int main(void)
{
	long int number = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(num); prime++)
	{
		if (number % prime == 0)
		{
			number = number / prime;
			prime = 1;
		}
	}
	printf("%ld\n", number);
	return (0);
}
