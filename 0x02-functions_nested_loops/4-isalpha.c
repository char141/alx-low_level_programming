#include "main.h"
/**
 * _isalpha - checks if a letter is lowercase or uppercase
 *@c - character to be checked
 *Return: 1 if character is a letter, 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c > 65 && c <= 90) || (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
