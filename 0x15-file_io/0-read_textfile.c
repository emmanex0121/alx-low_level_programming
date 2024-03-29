#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int lenR, lenW;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	lenR = read(fd, buf, letters);
	if (lenR == -1)
	{
		free(buf);
		return (0);
	}
	else
	{
		letters = lenR;
	}

	close(fd);

	lenW = write(STDOUT_FILENO, buf, letters);

	free(buf);

	return (lenW);
}
