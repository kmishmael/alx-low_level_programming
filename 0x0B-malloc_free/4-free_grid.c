#include "main.h"

/**
 * free_grid - free 2d grid
 * @grid: pointer to pointer int
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
