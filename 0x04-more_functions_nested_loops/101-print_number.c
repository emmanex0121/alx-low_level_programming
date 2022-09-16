#include <stdio.h>

/**
 * print_number - Function to print integer using putchar
 * @n: Integer paramet
 */

void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	putchar((n % 10) + '0');
}
