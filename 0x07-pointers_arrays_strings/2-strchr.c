#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: character
 * @s: string
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
