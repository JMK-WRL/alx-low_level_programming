#include "main.h"

/**
 * read_textfile - read the text file and print it to STDOUT
 * @filename: text file to be read
 * @letters: numbers of letters to be read
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *i;
	size_t m, n;

	if (filename == NULL)
	{
		return (0);
	}

	i = malloc(sizeof(char) * letters);
	if (i == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	m = read(fd, i, letters);
	n = write(STDOUT_FILENO, i, m);

	close(fd);
	free(i);

	return (n);
}
