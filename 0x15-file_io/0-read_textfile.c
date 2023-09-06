#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int lenR, lenW;
	char *buf;

	if (filename == NULL)
		return 0;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return 0

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return 0;
	}

	lenR = read(fd, buf, letter);
	if (lenR == -1)
	{
		free(buf);
		return(0);
	}
	close(fd);

	lenW = write(STDOUT_FILENO, buf, letters);
	free(buf);

	if (lenR != lenW)
		return 0;

	return (lenW);
}
