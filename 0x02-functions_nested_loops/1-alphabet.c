#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(a);
		a++;
	}

	putchar('\n');
}
