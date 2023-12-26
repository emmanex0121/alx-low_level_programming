#include <stdio.h>

/**
 * _strcat - Function to concatenate strings
 * @dest: parameter for string 1
 * @src: parameter for string 2
 *
 * Return: contatenated string stored in @dest
 */

char *_strcat(char *dest, char *src)
{
	int lenght = 0;
	int j;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[lenght] = src[j];
		lenght++;
	}
	return (dest);
}
