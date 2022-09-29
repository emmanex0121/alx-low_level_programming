#include<stdio.h>
/**
 * _strlen - computes the length of a string
 * @s: input string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * iterate - loops through the chars of a string
 * @s: input string
 * @i: smallest index
 * @j: highest index of the string
 *
 * Return: result
 */
int iterate(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + iterate(s, i + 1, j - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (iterate(s, 0, _strlen(s) - 1));
}
