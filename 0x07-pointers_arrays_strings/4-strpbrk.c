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
	int count = 0, isMatch, i, j;
	char *res = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		isMatch = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				 res = &s[i];
				 isMatch = 1;
				 break;
			}
		}
		if (isMatch)
			break;
	}
	return (res);
}
