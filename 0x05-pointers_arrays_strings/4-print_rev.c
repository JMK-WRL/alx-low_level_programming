#include "main.h"

/**
 * print_rev -prints a string in reverse mode
 * @s: string reference point
 * Return: Same string in reverse order
 */

void print_rev(char *s)
{
	int str;

	str = 0;
	while (s[str])
		str++;
	while (str--)
		_putchar(s[str]);
	_putchar('\n');
}
