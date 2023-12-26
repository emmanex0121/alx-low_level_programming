#include "main.h"

/**
 * _islower - checks for lower case in the code
 * @c: the character to be checked
 *
 * Return: return 1 for lowercase character or 0 for anything not lowercase
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
