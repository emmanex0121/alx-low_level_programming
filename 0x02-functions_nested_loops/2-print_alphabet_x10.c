#include <stdio.h>


/**
 * print_alphabet_x10 - Function that prints alphabet 10 times
 *
 * Description: lorem ipsum
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(a);
			a++;
		}
	putchar('\n');
	}
}
