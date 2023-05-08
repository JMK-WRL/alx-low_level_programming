#include "main.h"

char *create_buffer(char *file);
void close_file(int fl);

/**
 * create_buffer - function that copies content of a file to another
 * @file: the file buffer
 * Return: Pointer to the new buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}


/**
 * close_file - function that closes file descriptors
 * @fl: file descriptor to be closed
 */

void close_file(int fl)
{

	int x;

	x = close(fl);

	if (x == -1)
	{
		dprintf(STDERR_FILENO,
			"Erro: Can't close fl %d\n", fl);
		exit(100);
	}
}

/**
 * main - function that copies the contents of file
 * to another file.
 * @argc: Number of parameters supplied
 * @argv: array of pointers
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int from;
	int to;
	int R;
	int W;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	R = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || R == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		W = write(to, buffer, R);
		if (to == -1 || W == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't wrote to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		R = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (R > 0);

	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
