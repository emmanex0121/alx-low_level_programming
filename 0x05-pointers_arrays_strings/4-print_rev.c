#include <stdio.h>

/**
 * print_rev - Function that prints a string in reverse
 * @s: Pointer varible to characters
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}

	for (i = i - 1; i >= 0; --i)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
