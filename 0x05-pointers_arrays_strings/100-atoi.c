#include "main.h"
/**
 * _atoi - function to convert a string to an integer
 * @s: string to be converted
 * Return: integers
 */
int _atoi(char *s)
{
	int i, result, negative;

	i = result = 0;
	negative = 1;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		negative = -negative;
	if ((s[i] >= '0') && (s[i] <= '9'))
		result = result * 10 + negative * (s[i] - '0');
	else if (result != 0)
		break;
	}
return (result);
}
