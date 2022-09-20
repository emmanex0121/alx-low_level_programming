#include <stdio.h>

/**
 * _strlen - Function to return string lenght
 * @s: pointer parameter
 * Return: String lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * puts_half - Function that prints half of the string
 * @str: pointer parameter
 */
void puts_half(char *str)
{
	int n;
	int l = _strlen(str);

	if (l % 2 != 0)
	{
		n  = (l - 1) + 2;
	}
	else
	{
		n = (l / 2);
	}

	while (n < l)
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
