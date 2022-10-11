#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function to print the contents of a struct dog
 * @d: structure to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %0.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s\n", d->owner);
}
