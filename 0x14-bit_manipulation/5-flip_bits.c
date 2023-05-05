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
	unsigned int flip;
	unsigned long int new_num = n ^ m;

	while (new_num > 0)
	{
		if ((new_num & 1) == 1)
			flip++;
		new_num >>= 1;
	}
	return (flip);
}
