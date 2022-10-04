#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function to concacenate all arguments of a program
 * @ac: number of arguments in a program
 * @av: array of pointers to the arguments
 * Return: pointer to the new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, totalsize = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			totalsize++;
	}
	str = malloc(sizeof(char) * totalsize + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];
		str[i++] = '\n';
	}
	str[totalsize] = '\0';
	return (str);
}
