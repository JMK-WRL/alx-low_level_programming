#include "main.h"

/**
 * _strlen_recursion - functions that returns the length of a string
 * @s: String to be checked
 * Return: 0 (success)
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
