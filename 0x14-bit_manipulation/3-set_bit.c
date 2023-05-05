#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: Pointer to the number being set
 * @index: Index
 *
 * Return: 1 it it works, -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1ul << index) | *n);
	{
		return (1);
	}
}
