#include <stdio.h>
/**
 * main - prints it's name and  a new line
 * @argc: number of command line arguments
 * @argv: the program command line arguments
 *
 * Return: 0 for no errors 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
