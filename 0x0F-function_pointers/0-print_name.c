#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: the pointer to a function
 * Return 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
