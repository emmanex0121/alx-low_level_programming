#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * 8-print_base16.c - program that prints all the numbers of base 16 in lowercase, followed by a new line.
 */

int main(void)
{
	char c = 'a';
	char n = '0';
	int i;

	for  (i = 0; i < 10; i++)
	{
		putchar(n);
		n++;
	}

	for (i = 0; i <= 5; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
