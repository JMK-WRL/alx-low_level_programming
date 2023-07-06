#include "main.h"

/**
 * set_bit - function that set the value of a bit to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set
 * Return: 1 (success) otherwise (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	{
		return (1);
	}
}

