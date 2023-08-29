#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

//#include "main.h"
//ssize_t read_textfile(const char *filename, size_t letters);

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
	    return (0);
    lenR = read(fd, buf, letters);
    close(fd);

    //printf("buf is: %s", buf);

    lenW = write(STDOUT_FILENO, buf, letters);
    free(buf);

    if (lenR != lenW)
	    return (0);

    return (lenR);
}



//int main(int argv, char *argc[])
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 10);
    printf("\n(printed chars: %li)\n", n);

    n = read_textfile(av[1], 20);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

/*
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
*/
