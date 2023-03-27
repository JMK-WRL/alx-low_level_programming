#include "main.h"

/**
 * puts2 - prints every other character of a sting
 * @str: pointer
 * Return: 0 (success)
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
