#include<stdio.h>
/**
 * root_finder - finds the root of a number using binary search
 * @l: lowest bound
 * @h: highest bound
 * @n: input number
 *
 * Return: the square root of the number
 */
int root_finder(int l, int h, int n)
{
	if (l <= h)
	{
		int mid = (l + h) / 2;

		if ((mid * mid <= n) &&
				((mid + 1) * (mid + 1) > N))
			return (mid);
		else if (mid * mid < N)
			return (root_finder(mid + 1, h, n));
		return (root_finder(l, mid - 1, N));
	}
	return (l);
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

	if (root * root != n)
		return (-1);
	return (root);
}
