#include <stdio.h>

/**
 * reverse_array - Function to reverse elements of an array
 * @a: parameter for array
 * @n: Parameter for array lenght
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		/* printf("%d", a[i]); */
		if (i != 0 && a[i])
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}
