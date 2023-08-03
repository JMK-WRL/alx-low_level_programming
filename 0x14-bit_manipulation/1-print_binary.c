#include "main.h"

/**
 * print_binary - function that prints the binary rep of a number
 * @n: number to be printed
 * Return: binary digits
 */

void print_binary(unsigned long int n)
{
	int x;
	int bin;
	unsigned long int num;

	x = 0;
	bin = 0;

	for (x = 63; x >= 0; x--)
	{
		num = n >> x;
		if (num & 1)
		{
			_putchar('1');
			bin++;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (!bin)
	{
		_putchar('0');
	}
}
