#include "main.h"

/**
 * _strlen - this function finds the lenght of a string
 * @s: the string that is counted
 *
 * Return: this returns the lenght of s
 */

int _strlen(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		lenght++;
	return (lenght);
}
