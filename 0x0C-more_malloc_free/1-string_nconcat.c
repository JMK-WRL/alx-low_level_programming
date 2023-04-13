#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int x;
	unsigned int y;
	char *s;

	a = 0;
	b = 0;
	x = 0;
	y = 0;

	while (s1[x])
		x++;
	while (s2[y])
		y++;

	if (n < y)
		s = malloc(sizeof(char) * (x + n + 1));
	else
		s = malloc(sizeof(char) * (x + y + 1));

	if (!s)
	{
		return (NULL);
	}
	while (a < x)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < y && a < (x + n))
		s[a++] = s2[b++];
	while (n >= y && a < (x + y))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
