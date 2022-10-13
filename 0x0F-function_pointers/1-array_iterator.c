#include <stdlib.h>
/**
 * array_iterator - function to iterate through an array and perform an action
 * @array: array to iterate through
 * @size: number of elements of array
 * @action: action (function) to perform on array elements
 * Return: void
 */
void array_iterator(int *array, size t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
