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
	int 2D;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	2D = malloc(sizeof(int *) * height);
	if (2D == NULL)
		return (NULL);
	for (height_index = 0; height_index < height; height_index++)
	{
		2D[height_index] = malloc(sizeof(int) * width);
		if (2D[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(2D[height_index]);
			free(2D);
			return (NULL);
		}
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			2D[height_index][width_index] = 0;
	}
	return (2D);
}
