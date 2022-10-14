#ifndef _VAR_FUNCS_
#define _VAR_FUNCS_
#include <stdarg.h>
/**
 * struct print_convert_variable - structure to hold function and char key
 * @type: abbreviation for type, i=int, c=char, f=float, s=string
 * @f: pointer to function for proper print statement
 */
typedef struct print_convert_variable
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(int);

#endif /* _VAR_FUNCS_ */
