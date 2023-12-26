#include "main.h"

/**
 * _isupper - this check if c is uppercase
 * @c: parameter to be checked
 *
 * Return: return 1 when sucessful else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
