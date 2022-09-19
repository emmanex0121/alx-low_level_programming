#include <stdio.h>

/**
 * _puts - Function that prints string
 * @str: pointer holding the location of the parameter
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
