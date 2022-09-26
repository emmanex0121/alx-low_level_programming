#include <stdio.h>

/**
 * _memset - Function to replace memory area with a constant
 * @s: parameter of the pointer to memory area
 * @n: parameter to hold number of bytes to alter
 * @b: parameter to hold the constant
 *
 * Return: the swapped values
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j;
	int i = n;

	for (j = 0; j < i && s[j] != '\0' ; j++)
	{
		s[j] = b;
	}
	return (s);
}
