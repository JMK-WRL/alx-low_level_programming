#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: input array
 * @n: length of array
 * Return: array
 */

void print_array(int *a, int n)
{
	int index;

	index = 0;
	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(",  ");
		}
	}
	putchar('\n');
}
