#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	a = 0;
	b = 0;
	mul = (a * b);

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = (a * b);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
