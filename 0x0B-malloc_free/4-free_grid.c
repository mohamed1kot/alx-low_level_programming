#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 *
 * @grid : arrey.
 * @height : row of arrey.
 *
 * Return: Null
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; height++)
	{
		free(grid[i]);
	}
	free(grid);
}
