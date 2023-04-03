#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string
 * @accept: bytes
 * Return: 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	x = 0;
	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
