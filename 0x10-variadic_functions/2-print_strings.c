#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings passed as parameters
 * @separator: Strings Separator
 * @n: number of remaining parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(str, char *);

		if (x == NULL)
			printf("%p", x);
		else
			printf("%s", x);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	
	va_end(str);
	printf("\n");
}
