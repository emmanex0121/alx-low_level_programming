#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
