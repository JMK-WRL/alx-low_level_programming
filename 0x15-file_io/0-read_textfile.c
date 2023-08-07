#include "main.h"

/**
 * read_textfile - read the text file and print it to STDOUT
 * @filename: text file to be read
 * @letters: numbers of letters to be read
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	ssize_t a;
	ssize_t b;
	char *buff;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	a = read(fp, buff, letters);
	b = write(STDOUT_FILENO, buff, a);
	
	free(buff);
	close(fp);
	return (b);
}
