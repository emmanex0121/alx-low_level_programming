#include <stdio.h>

/**
 * print_alphabet - Prints all aphabets
 * @void: lorem ipsium
 *
 * Description: This function prints all the alphabet
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
