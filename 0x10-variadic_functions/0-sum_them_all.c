#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of parameters to be summed
 * @...: variable
 * Return: (n == 0) return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int S;
	va_list N;

	S = 0;
	x = 0;

	va_start(N, n);

	for (x = 0; x < n; x++)
	{
		S += va_arg(N, int);
	}
	va_end(N);
	return (S);
}
