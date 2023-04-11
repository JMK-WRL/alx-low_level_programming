#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees 2D grid that was previously created
 * @grid: 2D grid to be freed
 * @height: height of the 2D grid
 * Return: 0 (success)
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}
