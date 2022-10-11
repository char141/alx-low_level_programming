#include "main.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcpy(char *dest, char *str);
/**
 * _strlen - function to find the length of a string
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - function to copy a string
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */
char _strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - function to create a new struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	if (name == NULL)
		doggy->name = NULL;
	else
	{
		doggy->name = malloc(_strlen(name) + 1);
		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->name = _strcpy(doggy->name, name);
	}
	if (owner == NULL)
		doggy->owner = NULL;
	else
	{
		doggy->owner = malloc(_strlen(owner) + 1);
		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}
		doggy->owner = _strcpy(doggy->owner, owner);
	}
	doggy->age = age;
	return (doggy);
}
