#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	int a;
	int x;

	if (x <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; a++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
