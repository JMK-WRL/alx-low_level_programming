#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned char op;
	int u;
	int p;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	u = atoi(argv[1]);

	if (u < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (p = 0; p < u; p++)
	{
		op = *(unsigned char *)address;
		printf("%.2x", op);

		if (p == u - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
