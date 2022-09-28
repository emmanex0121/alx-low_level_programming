#include<stdio.h>
/**
 * root_finder - finds the root of a number
 * @n: input number
 * @i: iteration
 *
 * Return: the square root of the number
 */
int root_finder(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + root_finder(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: returns natural sqrt otherwise -1 it it does not exist
 */
int _sqrt_recursion(int n)
{
	int root = root_finder(0, n, n);

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (root);
}
