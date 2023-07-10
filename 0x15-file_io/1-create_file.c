#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: terminated string to write the file
 * Return: 1 (success), otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int len;
	int wr;

	fp = 0;
	len = 0;
	wr = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fp, text_content, len);

	if (fp == -1 || wr == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
