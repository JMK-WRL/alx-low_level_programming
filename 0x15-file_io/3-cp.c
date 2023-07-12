#include "main.h"

/**
 * printUsageError - function that prints usage error
 * Return: 0 (success)
 */

void printUsageError()
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * printReadError - prints reading error
 * Return: 0 (success)
 */

void printReadError(const char *filename)
{
	dprintf(2, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * printWriteError - prints writing error
 * Return: 0 (success);
 */

void printWriteError(const char *filename)
{
	dprintf(2, "Error: Can't write file to %s\n", filename);
	exit(99);
}

/**
 * printCloseError - prints closing error
 * @fd: file descriptors
 * Return: 0 (success)
 */

void printCloseError(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buffer[1024];
	int nread;

	if (argc != 3)
	{
		printUsageError();
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		printReadError(argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		printWriteError(argv[2]);
	}

	while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write(fd_to, buffer, nread);
	}

	if (nread == -1)
	{
		printReadError(argv[1]);
	}

	if (close(fd_from) == -1)
	{
		printCloseError(fd_from);
	}

	if (close(fd_to) == -1)
	{
		printCloseError(fd_to);
	}

	return (0);
}
