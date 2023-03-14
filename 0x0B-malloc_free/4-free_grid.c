#include "main.h"

/**
 * free_grid - free a 2-dimensional grid
 * @grid: the grid
 * @height: the height of the grid
*/
void free_grid(int **grid, int height)
{
	if (grid && height)
	{
		while (height--)
			free(grid[height]);
		free(grid);
	}
}
