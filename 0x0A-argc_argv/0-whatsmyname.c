#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: count of arguments supplied to the program
 * @argv: pointer to arguments
 * Return: Exit success
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}
