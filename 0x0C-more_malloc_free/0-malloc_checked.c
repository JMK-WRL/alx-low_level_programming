#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - functions that allocates a memory using malloc
 * @b: memory size
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
