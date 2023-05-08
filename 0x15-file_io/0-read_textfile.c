#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX stdout
 * @filename: file to be read
 * @letters: number of letter to read and print
 * Return: 1 (success), else 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O;
	ssize_t R;
	ssize_t W;
	char *buffer;

	O = open(filename, O_RDONLY);
	if (O == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	R = read(O, buffer, letters);
	W = write(STDOUT_FILENO, buffer, R);

	free(buffer);
	close(O);
	return (W);
}
