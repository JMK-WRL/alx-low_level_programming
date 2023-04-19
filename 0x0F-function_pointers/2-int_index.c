#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches an integer
 * @array: stores elements
 * @size: number of elements in the array
 * @cmp: pointer to a function
 * Return: 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	n = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
			{
				return (n);
			}
		}
	}
	return (-1);
}
