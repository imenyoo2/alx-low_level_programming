#include <stdlib.h>

/**
 * free_grid - frees memory allocated by alloc_grid function
 * @grid: array to be freeed
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
