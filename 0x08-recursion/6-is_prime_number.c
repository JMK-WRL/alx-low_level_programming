#include "main.h"

/**
 * is_prime_number - function that whether a number is an prime number
 * @n: number being checked
 * Return: 1 (success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
