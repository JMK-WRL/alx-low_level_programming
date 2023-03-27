#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;

	*b = *a;
	*a = swap;
}
