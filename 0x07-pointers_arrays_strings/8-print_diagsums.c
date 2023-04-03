#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals of a
 * square matrix of integers
 * @a: Input value
 * @size: input
 * Return 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int s1;
	int s2;
	int b;

	s1 = 0;
	s2 = 0;
	b = 0;

	for (b = 0; b < size; b++)
	{
		s1 = s1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		s2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
