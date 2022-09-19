#include <stdio.h>

/**
 * swap_int - Function to swap two integer values
 * @a: integer pointer a
 * @b: integer pointer b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
