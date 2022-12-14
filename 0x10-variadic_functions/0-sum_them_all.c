/*#include <stdio.h>*/
#include <stdlib.h>
/*#include <stdarg.h>*/
#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum all the function parameters
 * @n: number of parameters to be passed
 *
 * Return: 0 if n == 0, otherwise return the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, x = 0;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < n; i++)
		x += va_arg(num, int);

	va_end(num);
	return (x);
}
