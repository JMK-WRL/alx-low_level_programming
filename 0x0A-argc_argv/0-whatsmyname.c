#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the name of the file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	if (argc > 0)
	{
		for ( i = 0; i < argc; i++)
		{
		printf("%s\n", argv[0]);
		}
	}

	return (0);
}
