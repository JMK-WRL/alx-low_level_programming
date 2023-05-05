#include "main.h"

/**
 * print_binary - function that prints the binary representation of a num
 * @n: The number to be printed
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int j;
	int a, b = 0;

	for (a = 63; a >= 0; a--)
	{
		j = n >> a;

		if (j & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
		{
			_putchar('0');
		}
	}
	if (!b)
	{
		_putchar('0');
	}
}
