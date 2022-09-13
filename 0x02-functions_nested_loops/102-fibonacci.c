#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - prints the first 50 fibbonachi numbers.
 * Return: always 0
*/
int main(void)
{
	int placeholder;
	unsigned long term1 = 0, term2 = 1, nextterm;

	for (placeholder = 0; placeholder < 50; placeholder++)
	{
		nextterm = term1 + term2;
		printf("%lu", nextterm);

		term1 = term2;
		term2 = nextterm;

		if (placeholder == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

