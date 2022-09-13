#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char a = 'a';
	int i;
	for (i = a; i < 27; i++)
	{
		putchar(a);
	}

	putchar('\n');
}
