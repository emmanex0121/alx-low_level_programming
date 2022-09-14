#include <stdio.h>


/**
 * print_to_98 - Function that prints value to and from 98
 * @n: Parameter n
 *
 * Description: Lorem Ipsum
 */

void print_to_98(int n)
{
	int i;

	if (n <= 97)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d", n);
			n++;
		}
	}
	else if (n >= 99)
	{
		for (i = n; i >= 99; i--)
		{
			printf("%d", n);
			n--;
		}
	}
	else if (n == 98)
	{
		printf("%d", 98);
	}
	putchar('\n');
}
