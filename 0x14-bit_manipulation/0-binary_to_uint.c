#include "main.h"

/**
 * binary_to_uint - function that converts a binary num to an int
 * @b: binary number
 *
 * Return: binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_val;
	int n;

	bin_val = 0;
	n = 0;

	if (!b)
	{
		return (0);
	}
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
		{
			return (0);
		}
		bin_val = 2 * bin_val + (b[n] - '0');
	}
	return (bin_val);
}
