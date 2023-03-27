#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to the string
 * Return:
 */

void rev_string(char *s)
{
	int length, x, rev;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	x = 0;
	rev = length / 2;

	while (rev--)
	{
		temp = s[length - x - 1];
		s[length - x - 1] = s[x];
		s[x] = temp;
		x++;
	}
}
