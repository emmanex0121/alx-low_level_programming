#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
