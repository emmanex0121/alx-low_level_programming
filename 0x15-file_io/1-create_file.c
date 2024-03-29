#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file_cp;
	int a;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file_cp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_cp == -1)
		return (-1);

	for (a = 0; text_content[a]; a++)
		;

	write(file_cp, text_content, a);

	close(file_cp);

	return (1);
}
