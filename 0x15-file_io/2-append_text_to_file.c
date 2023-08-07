#include "main.h"

/**
 * append_text_to_file - function that appends texts at the end of a file
 * @filename: name of the file
 * @text_content: terminated string
 * Return: 1 (success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int end;
	int len;
	int wr;

	end = 0;
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

	end = open(filename, O_WRONLY | O_APPEND);
	wr = write(end, text_content, len);

	if (end == -1 || wr == -1)
	{
		return (-1);
	}
	close(end);
	return (1);
}
