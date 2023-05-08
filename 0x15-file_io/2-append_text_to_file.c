#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to be added
 * Return: 1 (success), -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int File;
	int len;
	int str;

	len = 0;
	str = 0;

	File = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	if (File == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		str = write(File, text_content, len);
		close(File);
	}
	if (str != len)
	{
		return (-1);
	}
	return (1);
}
