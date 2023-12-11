#include <stdio.h>

/**
 * _strlen - Function to print string lenght
 * @s: Parameter for the string
 *
 * Return: the value i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
