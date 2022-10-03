#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function to point to a 2-D  array of integers
 * @height: height of array
 * @width: width of array
 * Return: NULL or pointer to the new array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (height_index = 0; height_index < height; height_index++)
	{
		arr[height_index] = (int *)malloc(sizeof(int) * width);
		if (arr[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(arr[height_index]);
			free(arr);
			return (NULL);
		}
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			arr[height_index][width_index] = 0;
	}
	return (arr);
}
