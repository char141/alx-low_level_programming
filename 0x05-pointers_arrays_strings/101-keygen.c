#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates randone passwords for crackme program
 * Return: success
 */
int main(void)
{
	int n, p;

	srand(time(NULL));
	for (n = 2772; n >= 127; n -= p)
	{
		p = (rand() % 94 + 33);
		printf("%c", p);
	}
	printf("%c", p);
	return (0);
}
