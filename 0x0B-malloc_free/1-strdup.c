#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated memory
 * @str: strung duplicate
 * Return: 0 (success)
 */

char *_strdup(char *str)
{
	int a;
	int b;
	char *x;

	a = 0;
	b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
		a++;
	x = malloc(sizeof(char) * (a + 1));

	if (x == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
		x[b] = str[b];
	return (x);
}
