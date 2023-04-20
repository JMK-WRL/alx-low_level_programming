#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - functions that prints strings followed by a new line
 * @separator: string to be printed
 * @n: number of strings
 * @...: variable
 * Return: (nil) - if string is null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *g;
	va_list S;

	x = 0;
	va_start(S, n);

	for (x = 0; x < n; x++)
	{
		g = va_arg(S, char *);

		if (g == NULL)
			printf("(nil)");
		else
			printf("%s", g);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(S);
}
