#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((c % 10) + '0');
		if (i == 9)
		{
			continue;
		}	
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
