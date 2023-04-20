#include "variadic_functions.h"


/**
 * print_all - functions that prints everything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list argm;
	unsigned int x;
	char *S;
	char *v;

	x = 0;
	v = "";
	va_start(argm, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", v, va_arg(argm, int));
					break;
				case 'i':
					printf("%s%i", v, va_arg(argm, int));
					break;
				case 'f':
					printf("%s%f", v, va_arg(argm, double));
					break;
				case 's':
					S = va_arg(argm, char *);
					if (!S)
						S = "(nil)";
					printf("%s%s", v, S);
					break;
				default:
					x++;
					continue;
			}
			v = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(argm);
}
