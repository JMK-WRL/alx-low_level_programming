#include "main.h"
#include <stdio.h>


/**
 * main - functioon that prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d\n", argc - 1);
		}
		}
	return (0);
}
