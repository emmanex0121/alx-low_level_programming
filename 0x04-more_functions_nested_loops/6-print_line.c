#include <stdio.h>

/**
 * print_line - Funtion that prints a straight line
 * @n: parameter
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			putchar('\n');
		else
			putchar('_');
	}
}
