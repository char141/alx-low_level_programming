#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - prints the sum of even valued fibonacci terms.
 * Return: always 0
*/
int main(void)
{
	unsigned long term1 = 0, term2 = 1, nextterm;
	float even_sum;

	while (nextterm < 4000000)
	{
		nextterm = term1 + term2;
		if (nextterm % 2 == 0)
			even_sum += nextterm;

		term1 = term2;
		term2 = nextterm;
	}
	printf("%.0f\n", even_sum);
	return (0);
}
