#include "main.h"

/**
 * creating_buffer - allocates 1024 bytes for a buffer
 * @file: The name of the file to be stored by the buffer
 * Return: pointer to the new allocated buffer
 */

char *creating_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char * 1024));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * closing_file - closes the file descriptors
 * @fd: to be closed
 */

void closing_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents from one file to another
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int from;
	int to;
	int wr;
	int rd;
	char *buff;

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = creating_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {

		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read to %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	closing_file(from);
	closing_file(to);
	return (0);
}
