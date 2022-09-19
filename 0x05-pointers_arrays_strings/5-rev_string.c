#include "main.h"
/**
 * rev_string - function to reverse string characters
 * @s: input string
 * Return: reversed string
 *
 */
void rev_string(char *s)
{
	int i;
	int counter = 0;
	char reverse = s[0];

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		reverse = s[i];
		s[i] = s[counter];
		s[counter] = reverse;
	}
}
