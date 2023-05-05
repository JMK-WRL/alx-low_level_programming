#include "main.h"

/**
 * flip_bits - function that returns a number of bits that you
 * would need to flip to get from one num to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int new_bit = n ^ m;
	int i, j = 0;

	for (i = 63; i >= 0; i--)
	{
		x = (new_bit >> i);
		if (x & 1)
		{
			j++;
		}
	}
	return (j);
}
