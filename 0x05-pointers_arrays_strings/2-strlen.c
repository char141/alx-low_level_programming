#include "main.h"
/**
 * _strlen - function to output the length of a string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char word = s[0];

	while (word != '\0')
	{
		sum++;
		word = s[i++];
	}
	return (0);
}
