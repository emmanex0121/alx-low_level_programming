#include <stdio.h>


/**
 * print_to_98 - Function that prints value to and from 98
 * @n: Parameter n
 *
 * Description: Lorem Ipsum
 * Return: 0 Success
 */

void print_to_98(int n)
{
	unsigned int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", n);
			n++;
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
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
