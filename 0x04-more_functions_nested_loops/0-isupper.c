#include "main.h"

/**
 * _isupper - funtion that checks for uppercase characters
 * @c: character being checked
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (1);
	}
	else
		return (0);
}
