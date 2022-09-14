#include <stdio.h>

/**
 * _abs - function that returns absolute value of an int
 * @n: parameter
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	else if (n > 0)
	{
		n = n * 1;
	}
	else (n == 0)
	{
		n = 0;
	}
	return (n);
}
