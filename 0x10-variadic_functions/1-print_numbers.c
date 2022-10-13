#include "variadic_functions.h"

/**
 * print_numbers - Function to print numbers passsed as arguments
 * @separator: pointer to char seperator
 * @n: number of remaining parameters to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num, int);
		printf("%d", x);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
}
