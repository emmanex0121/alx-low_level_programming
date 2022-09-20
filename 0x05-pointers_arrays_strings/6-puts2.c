#include <stdio.h>

/**
 * _strlen - Function to return string lenght
 * @s: String pointer
 *
 * Return: String lenght
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * puts2 - Function that prints in 2's increment
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
