#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: filename
 * @text_content: null terminated string content to be appended
 *
 * Return: 1 if file exists, -1 if file not exist | no write permission
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		write(fd, "", 0);
	}
	else
	{
		for (count = 0; text_content[count]; count++)
			;
		write(fd, text_content, count);
	}

	return (1);
}
