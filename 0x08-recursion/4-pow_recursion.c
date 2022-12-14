#include<stdio.h>
/**
 * _pow_recursion - finds the value of x to the power of y
 * @x: the base
 * @y: the power
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
