#include "main.h"

/**
 * flip_bits - function that counts the num
 * of bits to be changed
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int bit;
	unsigned long int num;
	unsigned long int num2 = n ^ m;

	a = 0;
	bit  = 0;

	for (a = 63; a >= 0; a--)
	{
		num = num2 >> a;
		if (num & 1)
		{
			bit++;
		}
	}
	return (bit);
}
