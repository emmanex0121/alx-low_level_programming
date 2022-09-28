#include<stdio.h>
/**
 * factorial - computes factorial of a number
 * @n: input number
 *
 * Return: 1 if n equals 0 otherwise n * factorial(n-1)
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
