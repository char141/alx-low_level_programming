#include "main.h"
/**
 * _strspn - function to get the length of a prefix substring
 * @s: string
 * @accept: byte substring to include
 * Return: number of bytes in s that contain bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					len++;
			}
		}
	else
		return (len);
	return (len);
}
