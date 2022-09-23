#include <stdio.h>

/**
 * reverse_array - Function to reverse elements of an array
 * @a: parameter for array
 * @n: Parameter for array lenght
 */

void reverse_array(int *a, int n)
{
	for (n = n - 1; n >= 0; n--)
	{
		/* printf("%d", a[i]); */
		if (n != 0 && a[n])
		{
			printf("%d, ", a[n]);
		}
		else
		{
			printf("%d", a[n]);
		}
	}
}
