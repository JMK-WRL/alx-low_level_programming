#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the character to be checked
 * Return: 1 and points + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(45);
	return (0);
	}
}
