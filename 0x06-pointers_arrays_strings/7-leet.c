#include "main.h"

/**
 * *leet - function that encode a string into 1337
 * @a: Input value
 * Return: a
 */

char *leet(char *a)
{
	int x;
	int y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "443300771l";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (a[x] == s1[y])
			{
				a[x] = s2[y];
			}
		}
	}
	return (a);
}
