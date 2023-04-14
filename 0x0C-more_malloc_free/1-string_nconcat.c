#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: size
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b, S, x, y;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	x = _strlen(s1);
	y = _strlen(s2);

	if (n > y)
		n = y;
	S = x + n;
	p = malloc(sizeof(char) * (S + 1));
	if (!p)
		return (NULL);
	for (a = 0; a < x; a++)
		p[a] = s1[a];
	for (b = 0; b < n; b++, a++)
		p[a] = s2[b];
	p[a] = 0;
	return (p);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	char *P = s;

	while (*s)
		s++;
	return (s - P);
}
