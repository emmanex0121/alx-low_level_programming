#include <stdio.h>

/**
 * _puts_recursion - Function to print string using recursion
 * @s: Parameter of the variable holding the string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
