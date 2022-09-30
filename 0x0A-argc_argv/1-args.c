#include <stdio.h>
#include "main.h"
/**
 * main - prints it's name and  a new line
 * @argc: number of command line arguments
 * @argv: the program command line arguments
 *
 * Return: 0 for no errors 1 otherwise
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
