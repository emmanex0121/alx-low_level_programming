#include <stdio.h>

/**
 * reverse_array - Function to reverse elements of an array
 * @a: parameter for array
 * @n: Parameter for array lenght
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
	}
}
