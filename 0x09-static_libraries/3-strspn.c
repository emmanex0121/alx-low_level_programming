#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 *
 * Return: the number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, omo;

	for (i = 0; s[i] != '\0'; i++)
	{
		omo = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				omo = 0;
				break;
			}
		}
		if (omo == 1)
			break;
	}
	return (i);
}
