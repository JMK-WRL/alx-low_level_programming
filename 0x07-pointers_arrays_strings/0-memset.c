#include "main.h"

/**
 * _memset - function that fills a block of memory with a specific value.
 * @s: appointed address
 * @b: value
 * @n: number of bytes
 * @_memset(): function that fills n
 * Return: pointer to the memory address of s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
