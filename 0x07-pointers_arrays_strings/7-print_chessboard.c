#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: array
 * Return: 0 (success)
 */

void print_chessboard(char (*a)[8])
{

	int k;
	int q;

	k = 0;
	q = 0;

	for (k = 0; k < 8; k++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[k][q]);
		_putchar('\n');
	}
}
