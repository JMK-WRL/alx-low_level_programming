#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: Number being checked
 * @index: Index list given
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j;

	if (index > 63)
	{
		return (-1);
	}

	j = (n >> index) & 1;

	return (j);
}
