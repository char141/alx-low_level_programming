#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_buffer - function to print a buffer
 * @b: pointer to a buffer
 * @size: buffer size
 * Return: Always 0
 */
void print_buffer(char *b, int size)
{
	int i, x;

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if ((i + x) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + x));
			if ((i % 2) != 0 && i != 0)
				printf("  ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + x) >= size)
				break;
			else if (*(b + i + x) >= 31 && *(b + i + x) <= 126)
				printf("%c", *(b + i + x));
			else
				printf(".");
		}
		if (x >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
