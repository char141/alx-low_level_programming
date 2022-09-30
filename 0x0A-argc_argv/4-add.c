#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds two positive numbers
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: sum or error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
