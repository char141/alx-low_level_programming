#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to multiply two numbers
 * @argc: number of arguments passed
 * @argv: arguments
 * Return: product or 1 in case of error
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		product *= atoi(argv[i]);
	printf("%d\n", product);
	return (0);
}
