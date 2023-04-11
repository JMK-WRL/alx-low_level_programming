#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2D array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int m;
	int n;
	int **g;

	m = 0;
	n = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		g[m] = malloc(sizeof(int) * width);
		if (g[m] == NULL)
		{
			for (; m >= 0; m--)
				free(g[m]);
			free(g);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			g[m][n] = 0;
	}
	return (g);
}
