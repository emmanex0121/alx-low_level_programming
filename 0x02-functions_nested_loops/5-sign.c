#include <stdio.h>

/**
 * print_sign - Function that tests numbers if +ve or -ve
 * @c: parameter that allows function to return integer value
 *
 * Description: sign of a number is tested
 * Return: Lorem Ipsium
 */

int print_sign(int c)
{
	if (c > 0)
	{
		return (1);
		putchar ('+');
	}
	else if (c == 0)
	{
		return (0);
		putchar ('0');
	}
	else if (c < 0)
	{
		return (-1);
		putchar ('-');
	}

}