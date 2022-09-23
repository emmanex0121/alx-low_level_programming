#include <stdio.h>

/**
 * reverse_array - Function to reverse elements of an array
 * @a: parameter for array
 * @n: Parameter for array lenght
 */

void reverse_array(int *a, int n)
{

	int i, j, temp;

	for (i = 0; i < n - 1; i--)
	{
		/* printf("%d", a[i]); */
	/*	if (n != 0 && a[n]) */
	/*	{ */
		/*	printf("%d, ", a[n]); */
	/*	} */
	/*	else */
	/*	{ */
		/*	printf("%d", a[n]); */
	/*	} */
/*	} */
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
