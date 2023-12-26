#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}



/**
 * _strcpy - Function to copy pointed string
 * including \0
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; v <= _strlen(src); v++)
		dest[v] = src[v];

	return (dest);
}
