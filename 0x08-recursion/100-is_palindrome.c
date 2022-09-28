#include "main.h"
#include <stdio.h>
/**
 * find_strlen - function to find the legnth of a string
 * @s: string to be checked
 * Return: string length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}
/**
 * check_palindrome - check if a string is palindrome
 * @s: string to be checked
 * @len: length of string
 * @index: index of a string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
