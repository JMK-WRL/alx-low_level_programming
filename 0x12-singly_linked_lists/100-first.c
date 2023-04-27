#include "lists.h"

void hare(void) __attribute__ ((constructor));

/**
 * hare - prints a sentence before the main function is executed
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
