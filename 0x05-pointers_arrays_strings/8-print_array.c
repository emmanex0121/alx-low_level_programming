#include <stdio.h>

/**
 * print_array - Function that prints array elements
 * @a: pointer paramerter
 * @n: integer parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
