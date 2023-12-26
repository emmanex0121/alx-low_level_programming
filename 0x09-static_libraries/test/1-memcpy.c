#include <stdio.h>

/**
 * _memcpy - Function to replace memory area with a constant
 * @dest: parameter of destination memory area
 * @n: parameter to hold number of bytes to alter
 * @src: parameter of source memory area
 *
 * Return: the copied values
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int i = n;

	/* { */
		for (j = 0; j < i; j++)
		{
			dest[j] = src[j];
		}
	/* } */
	return (dest);
}
