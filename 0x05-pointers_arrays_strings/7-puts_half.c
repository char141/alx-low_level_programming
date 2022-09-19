#include "main.h"
/**
 * puts_half -  function to print half of a string
 * @str: input
 * Return: half string
 */
void puts_half(char *str)
{
	int i, j;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	j = (length / 2);
	if ((length % 2) == 1)
		j = ((length + 1) / 2);
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
