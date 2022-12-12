#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int isMatch, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		isMatch = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				 return (s + i);
			}
		}
	}
	return ('\0');
}
