#include <stdio.h>

/**
 * puts2 - Function that prints in 2's increment
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
}
