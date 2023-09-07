#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - program that copies content from one file to another
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd, fd_close, fd1, fd1_close;
	/*int count;*/
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY | O_TRUNC);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buf = malloc(sizeof(char) * 1024);
	read(fd, buf, 1024);
	write(fd1, buf, 1024);

	fd_close = close(fd);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_close);
		exit(100);
	}

	fd1_close = close(fd1);
	if (fd1_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1_close);
		exit(100);
	}

	return (0);
}

