#include "main.h"
#include <string.h>

/**
 * _strncat - this function concatenates two strings
 * @dest: this is ths destination string
 * @src: this is the source string
 * @n: this is the number of bytes to concatenate
 *
 * Return: return the value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[lenght + i] = *src;
		src++;
	}
	dest[lenght + i] = '\0';
	return (dest);
}
