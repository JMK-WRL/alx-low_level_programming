#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	int c;
	unsigned int ni;
	int min;
	int is1;

	c = 0;
	ni = 0;
	min = 1;
	is1 = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			is1 = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (is1 == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
