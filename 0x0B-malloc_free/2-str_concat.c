#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input
 * @s2: input
 * Return: s1 and s2 concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	char *C;

	x = 0;
	y = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;
	C = malloc(sizeof(char) * (x + y + 1));
	if (C == NULL)
	{
		return (NULL);
	}
	while (s1[x] != '\0')
	{
		C[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		C[x] = s2[y];
		x++, y++;
	}
	C[x] = '\0';
	return (C);
}
