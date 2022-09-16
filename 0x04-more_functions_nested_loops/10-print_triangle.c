#include <stdio.h>

/**
 */

void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
		putchar('\n');
	else
		x = size;

		for (i = 0; i < size; i++)
		{
			for (j = x; j >= 0; --j)
			{
				putchar(' ');
			}
			putchar('#');
			x--;
		}
}
