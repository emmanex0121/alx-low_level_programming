#include<stdio.h>
/**
 * prime_checker - checks if a number is prime or not
 * @n: number to be checked
 * @i: iteration
 *
 * Return: 1 if prime and 0 otherwise
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_checker(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: input number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (prime_checker(n, n / 2));
}
