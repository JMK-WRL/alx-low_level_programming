#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
