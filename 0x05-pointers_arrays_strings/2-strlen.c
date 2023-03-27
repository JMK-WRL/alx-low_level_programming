#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: sting to be checked
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int str;

	str = 0;
	while (s[str])
		str++;
	return (str);
}
