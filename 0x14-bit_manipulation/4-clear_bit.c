#include "main.h"

/**
 * clear_bit - function that sets a value of a bit to 0
 * @n: pointer
 * @index: index given
 * Return: 1 if it works, -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1ul << index) & *n);
	{
		return (1);
	}
}
