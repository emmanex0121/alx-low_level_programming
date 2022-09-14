#include <stdio.h>
#include "main.h"

/**
 * print_sign - Function that tests numbers if +ve or -ve
 * @n: parameter that allows function to return integer value
 *
 * Description: sign of a number is tested
 * Return: Lorem Ipsium
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	return (0);
}
