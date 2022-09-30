#include <stdio.h>
/**
 * main - program to print arguments passed to it
 * @argc: number of arguments supplied to program
 * @argv: pointer to arguments passed
 * Return: Exit success
 */
int main(int argc, char *argv[])
{
	if (!*argv)
		return (-1);
	printf("%d\n", argc - 1);
	return (0);
}
