#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: points a string that holds the binary digits
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a;

	if (!b)
	{
		return (0);
	}

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		num = 2 * num + (b[a] - '0');
	}
	return (num);
}
