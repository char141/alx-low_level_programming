#include <stdlib.h>
/**
 * print_name - function to print the name of a given function
 * @name: name to print
 * @f: function to print the name
 * Retur: void
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
