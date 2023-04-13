#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: values
 * @max: values
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int *x;
	int n;
	int S;

	n = 0;

	if (min > max)
	{
		return (NULL);
	}

	S = (max - min + 1);

	x = malloc(sizeof(int) * S);

	if (x == NULL)
	{
		return (NULL);
	}

	for (n = 0; min <= max; n++)
		x[n] = min++;
	return (x);
}
