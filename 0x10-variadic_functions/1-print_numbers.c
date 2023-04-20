#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed
 * @n: number of integers
 * @...: variable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	va_list N;

	num = 0;

	va_start(N, n);

	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(N, int));

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(N);
}
