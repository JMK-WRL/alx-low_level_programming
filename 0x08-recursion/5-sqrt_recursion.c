#include "main.h"

/**
 * _sqrt_recursion - functions that returns the natural square root of a number
 * @n: number to return sqr
 * Return: The resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);

	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses again to find sqrt
 * @n: number to be checked
 * @i: iterator
 * Return: resulting square root.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
