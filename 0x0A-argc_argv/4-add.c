#include <stdio.h>
#include <stdlib.h>
/**
 * is_num - iterate through each argv to test if it's a number
 * @s: input
 * Return: true only if entire string is a number, false if not
 */

int is_num(char *s)
{
	int j = 0;

	for (j = 0; s[j]; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
			return (1);
	}
	return (0);
}

/**
 * main - print sum of argv
 * @argc: number of args
 * @argv: args
 * Return: 0 if no erro, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
