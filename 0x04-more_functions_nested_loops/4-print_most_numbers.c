#include <stdio.h>

/**
 * print_most_numbers - Function to print all numbers 0 - 9 except 2 & 4
 *
 * Description: Lorem Ipsum
 */

void print_most_numbers(void)
{
	int a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		if (a == '2' || a == '4')
		{
		}
		else
		{
		_putchar(a);
		}
		a++;
	}
	putchar('\n');
}
