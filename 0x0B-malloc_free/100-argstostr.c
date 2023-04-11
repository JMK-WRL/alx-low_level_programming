#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenate all the arguments of your program
 * @ac: integer input
 * @av: array
 * Return: 0 (success)
 */

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int b;
	int C;
	char *s;

	b = 0;
	C = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			C++;
	}
	C += ac;

	s = malloc(sizeof(char) * (C + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[b] = av[x][y];
			b++;
		}
	if (s[b] == '\0')
	{
		s[b++] = '\n';
	}
	}
	return (s);
}
