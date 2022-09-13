#include "stdio.h"
#include "main.h"
#include "stdio.h"
/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always 0
*/
int main(void)
{
	int placeholder;
	unsigned long term1 = 0, term2 = 1, nextterm;
	unsigned long term1_half1, term1_half2, term2_half1, term2_half2;
	unsigned long half1, half2;

	for (placeholder = 0; placeholder < 92; placeholder++)
	{
		nextterm = term1 + term2;
		printf("%lu, ", nextterm);

		term1 = term2;
		term2 = nextterm;
	}
	term1_half1 = term1 / 10000000000;
	term2_half1 = term2 / 10000000000;
	term1_half2 = term1 % 10000000000;
	term2_half2 = term2 % 10000000000;

	for (placeholder = 93; placeholder <= 98; placeholder++)
	{
		half1 = term1_half1 + term2_half1;
		half2 = term1_half2 + term2_half2;

		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (placeholder != 98)
			printf(", ");
		term1_half1 = term2_half1;
		term1_half2 = term2_half2;
		term2_half1 = half1;
		term2_half2 = half2;
	}
	printf("\n");
	return (0);
}
