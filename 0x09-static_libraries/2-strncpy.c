#include <stdio.h>

/**
 * _strncpy - Function to copy a string
 * @dest: destination string
 * @src: source string
 * @n: integer parameter
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
