#include "main.h"
#include <stdlib.h>

/**
 * _calloc - functuon that allocates memory for an array using malloc
 * @nmemb: number of elements in a an array
 * @size: size of element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x;

	x = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (size * nmemb); x++)
		s[x] = 0;
	return (s);
}
