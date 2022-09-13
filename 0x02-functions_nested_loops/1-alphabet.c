#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/**
 * @void: it is void
 *
 * Description: Nothing more than printing alphabets
 */
void print_alphabet(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}

	putchar('\n');
}
