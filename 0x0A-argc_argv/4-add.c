#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int m;
	int n;
	int sum;

	m = 1;
	n = 0;
	sum = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n]; n++)
		{
			if (argv[m][n] < '0' || argv[m][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[m]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
