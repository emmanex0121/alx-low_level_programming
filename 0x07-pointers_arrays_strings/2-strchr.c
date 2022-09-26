#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string parameter
 * @c: character parameter
 *
 * Return: the pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	if (s[j] == c)
		return (s + j);
	}
	return ('\0');
}
