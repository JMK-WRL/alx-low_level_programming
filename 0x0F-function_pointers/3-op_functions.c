#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: value
 * @b: value
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: value
 * @b: value
 * Return: diff of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns products of a and b
 * @a: value
 * @b: value
 * Return: prod of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: value
 * @b: value
 * Return: div of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: value
 * @b: value
 * Return: mod of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
