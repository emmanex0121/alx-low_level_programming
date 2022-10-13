#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Function that searchs for an integer
 * @array: array of integers
 * @size: Array size
 * @cmp: pointer to the function that perfoms the comparisms
 *
 * Return: -1 if size <= 0 or no element matches, index of first element
 * for which element does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
			else
				return (-1);
	}
	/*return (-1);*/
}
