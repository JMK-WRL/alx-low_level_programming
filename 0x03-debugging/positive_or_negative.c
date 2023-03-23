#include "main.h"

/**
 * positive_or_negative - check number if positive or negative
 * @i: number being checked
 */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
