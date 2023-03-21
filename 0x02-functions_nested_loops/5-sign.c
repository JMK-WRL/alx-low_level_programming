#include "main.h"

/**
 * int print_sign - prints the sign of a number
 *
 *
 */

int print_sign(int n);
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
	return(0);
	}
}
