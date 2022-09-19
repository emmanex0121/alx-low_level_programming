#include <stdio.h>

/**
 * _puts - Function that prints string
 * @str: pointer holding the location of the parameter
 */

void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
