#include <stdio.h>
#include "main.h"
/**
 * main - prints it's name and  a new line
 * @argc: number of command line arguments
 * @argv: the program command line arguments
 *
 * Return: 0 for no errors 1 otherwise
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
