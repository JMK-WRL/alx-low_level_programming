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
	unsigned int a;
	char *p;
	char *o;

	a = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	p = malloc(new_size);

	if (!p)
	{
		return (NULL);
	}

	o = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p[a] = o[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p[a] = o[a];
	}

	free(ptr);
	return (p);
}
