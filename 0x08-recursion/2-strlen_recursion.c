#include<stdio.h>

/**
 * _strlen_recursion - computes string length
 * @s: input string
 *
 * Return: 0 if s is null otherwise 1 + _strlen_recursion(s+1)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
