#include "main.h"

/**
 * print_error - prints error message
 * @message: message to be printed
 */

void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * open_file - opens the file selected
 * @filename: file to be opened
 * Return: filename
 */

int open_file(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(98);
	}
	return (fd);
}

/**
 * read_bytes - reads memory
 * @fd: file dp
 * @buffer: mem size
 * @num_bytes: mem
 * @error_message: error
 */

void read_bytes(int fd, void *buffer, ssize_t num_bytes, const char *error_message)
{
	ssize_t bytes_read;

	bytes_read = read(fd, buffer, num_bytes);
	if (bytes_read == -1 || bytes_read != num_bytes)
	{
		perror(error_message);
		exit(98);
	}
}

/**
 * main - function that prints ELF
 * @argc: number of arguments
 * @argv: pointers
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned char magic[4];
	unsigned char class;
	unsigned char data;
	unsigned char version;
	int fd;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	fd = open_file(argv[1]);

	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		perror("lseek");
		exit(98);
	}

	read_bytes(fd, magic, sizeof(magic), "read");
	if (magic[0] != 0x7F || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F')
	{
		print_error("Not and ELF file");
	}
	if (lseek(fd, 4, SEEK_SET) == -1)
	{
		perror("lseek");
		exit(98);
	}

	read_bytes(fd, &class, 1, "read");

	if (lseek(fd, 5, SEEK_SET) == -1)
	{
		perror("lseek");
		exit(98);
	}

	read_bytes(fd, &data, 1, "read");

	if (lseek(fd, 6, SEEK_SET) == -1)
	{
		perror("lseek");
		exit(98);
	}

	read_bytes(fd, &version, 1, "read");

	printf("Magic:	%02x %02x %02x %02x\n", magic[0], magic[1], magic[2], magic[3]);
	printf("Class:	%u\n", class);
	printf("Data:	%u\n", data);
	printf("Version: %u\n", version);

	close(fd);

	return (0);
}
