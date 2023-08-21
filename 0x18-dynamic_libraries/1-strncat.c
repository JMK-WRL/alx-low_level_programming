#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Input value
 * @src: Input value
 * @n: size
 * Return: 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] && (y < n) != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
