#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, and then in uppercase.
* Return: Always 0.
*/
int main(void)
{
	char letter;
	
	for(alphabet = 'a';alphabet <='z';alphabet++)
		putchar(alphabet);
	for(alphabet = 'A'; alphabet <='Z';alphabet++)
		putchar(alphabet);
	putchar ('\n');
	return (0);
}
