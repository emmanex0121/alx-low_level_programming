#include <stdio.h>

/**
 * _strncat - Function to concatenate strings limiting to n number of src
 * @dest: parameter for string 1
 * @src: parameter for string 2
 * @n: parameter for n number of bytes from src
 *
 * Return: contatenated string stored in @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght = 0;
	int j;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[lenght] = src[j];
		lenght++;
	}
	return (dest);
}
