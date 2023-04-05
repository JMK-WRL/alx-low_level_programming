#include "main.h"

/**
 * _pow_recursion - function that returns the value of x ^ y
 * @x: Value to be raiesed
 * @y: power of x
 * Return: Result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
