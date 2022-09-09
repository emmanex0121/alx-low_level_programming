#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char d = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
