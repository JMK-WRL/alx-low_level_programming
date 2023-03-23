#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: digit being checked
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
