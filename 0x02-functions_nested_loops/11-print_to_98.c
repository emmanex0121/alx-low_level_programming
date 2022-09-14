#include <stdio.h>


/**
 *
 */

void print_to_98(int n)
{
	unsigned int i;
	for (i = n; i < 99; i++)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
}
