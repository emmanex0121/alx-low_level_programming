#include "main.h"

/**
 * pow_t - Function to return power operation
 * @val: integer value
 * @n: integer value power
 *
 * Return: 1 if n is 0, val if n is 1 or power
 */

int pow_t(int val, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (val);
	return (val * pow_t(val, n - 1));
}

/**
 * binary_to_uint - function to convert binsry to decimal
 * @b: pointer to string of binary values
 *
 * Return: 0 if b is NULL and if any val is not 1 or 0, decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, p;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (len = 0; *(b + len) != '\0'; len++)
		;

	for (i = len - 1, p = 0; i >= 0; i--, p++)
	{
		if (*(b + i) == '0' || *(b + i) == '1')
		{
			dec += (*(b + i) - '0') * pow_t(2, p);
		}
		else
			return (0);
	}
	return (dec);
}
