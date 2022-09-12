#include "main.h"
/**
 * Main -  Prints 1 if a letter is lowercase
 * 	   and 0 if it is not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
