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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
