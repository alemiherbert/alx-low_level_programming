#include "main.h"

/**
 * alloc_grid - initialise each element of a 2-dimensional grid with 0s
 * @grid: the grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: the grid, or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
