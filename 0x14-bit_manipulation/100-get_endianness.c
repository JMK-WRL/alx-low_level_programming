#include "main.h"

/**
 * get_endianness - function that checks endianness
 * Return: 0 if endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *c = (char *) &i;

	i = 1;

	if (c[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
