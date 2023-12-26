#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: this is the destination string
 * @src: this is the source string
 * @n: this stores the value of string to copy
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
