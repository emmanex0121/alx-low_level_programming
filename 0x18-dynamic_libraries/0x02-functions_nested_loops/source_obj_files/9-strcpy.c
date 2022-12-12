#include <stdio.h>
#include "main.h"

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
