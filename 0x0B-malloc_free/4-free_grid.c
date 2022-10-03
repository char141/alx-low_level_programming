#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function to free a 2D grid
 * @grid: pointer to a pointer to a grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
