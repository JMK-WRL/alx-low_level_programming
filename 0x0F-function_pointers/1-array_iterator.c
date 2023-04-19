#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array to check
 * @size: size of array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	x = 0;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
