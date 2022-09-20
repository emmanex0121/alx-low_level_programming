#include <stdio.h>

/**
 * _strlen - returns lenght of string
 * @s: string parameter pointer
 *
 * Return: String Lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}


/**
 * rev_string - Function that reverses a string
 * @s: Parameter pointer
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
