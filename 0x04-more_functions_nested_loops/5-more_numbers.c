#include <stdio.h>

void print_chars(int n);

/**
 * more_numbers - Function to print all numbers 0 - 14
 *
 * Description: Lorem Ipsum
 */

void more_numbers(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			print_chars(j);
		}
	}
	putchar('\n');
}


/**
 * print_chars - print long integers
 * @n: Parameter n
 *
 * Description: Lorem Ipsum
 */

void print_chars(int n)
{
	if (n / 10)
		print_chars(n / 10);
	putchar(n % 10 + '0');
}
