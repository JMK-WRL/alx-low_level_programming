#include "main.h"
#include <stdlib.h>

/**
 * _realloc - relocates a memory block
 * @ptr: pointer
 * @old_size: size of ptr mem
 * @new_size: size of new mem
 * Return: Pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, b;
	char *p;
	char *o = ptr;

	a = 0;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		b = old_size;
	}

	for (a = 0; a < b; a++)
	{
		p[a] = o[a];
	}
	free(ptr);
	return (p);
}
