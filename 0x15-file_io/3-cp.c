#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * fd_open_err - checks if files can be opened.
 * @fd: file_from.
 * @fd1: file_to.
 * @argv: arguments vector.
 *
 * Return: no return.
 */
void fd_open_err(int fd, int fd1, char **argv)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * fd_close_err - checks if files can be closed.
 * @fd_close: file_from.
 * @fd1_close: file_to.
 *
 * Return: no return.
 */
void fd_close_err(int fd_close, int fd1_close)
{
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_close);
		exit(100);
	}
	if (fd1_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1_close);
		exit(100);
	}
}

/**
 * main - program that copies content from one file to another
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd, fd_close, fd1, fd1_close;
	ssize_t lenR, lenW;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	fd_open_err(fd, fd1, argv);

	lenR = 1024;
	while (lenR == 1024)
	{
		lenR = read(fd, buf, 1024);
		if (lenR == -1)
			fd_open_err(-1, 0, argv);
		lenW = write(fd1, buf, lenR);
		if (lenW == -1)
			fd_open_err(0, -1, argv);

	fd_close = close(fd);
	fd1_close = close(fd1);
	fd_close_err(fd_close, fd1_close);

	return (0);
}
