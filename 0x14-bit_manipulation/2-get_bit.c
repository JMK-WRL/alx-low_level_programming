#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 * @n: number to be searched
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
