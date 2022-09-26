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
	int j;

	for (j = 0; s[j]; j++)
	{
		if (s[j] == c)
		{
			return (s);
		}
		else
			return (NULL);
	}
	return (0);
}
