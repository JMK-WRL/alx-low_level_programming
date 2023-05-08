#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: string to be added in the file
 * Return: 1 (success), -1 (fail)
 */

int create_file(const char *filename, char *text_content)
{
	int File;
	int str;
	int w;

	str = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	File = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(File, text_content, str);

	if (File == -1 || w == -1)
	{
		return (-1);
	}

	close(File);
	return (1);
}
