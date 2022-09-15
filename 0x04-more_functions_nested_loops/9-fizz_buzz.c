#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that checks for uppercase character.
 * Return: 0
*/

int main(void)
{
	int place = 1;

	while (place <= 100)
	{
		if (place % 3 == 0 && place % 5 == 0)
			printf("FizzBuzz ");
		else if (place % 5 == 0)
		{
			if (place == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (place % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", place);
		h++;
	}
	return (0);
}
