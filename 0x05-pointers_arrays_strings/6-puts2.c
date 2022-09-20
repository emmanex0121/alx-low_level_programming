#include <stdio.h>

/**
 * puts2 - Function that prints in 2's increment
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i += 2;
		str +=2;
		putchar(str[i]);
	}
	putchar('\n');
}
