#include <stdio.h>
/**
 * main - program to print all its arguments
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: exit success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
