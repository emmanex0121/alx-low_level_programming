#include "main.h"

/**
 * _isdigit - this checks for a digit 0 through 9
 * @c: parameter to be checked
 *
 * Return: return 1 when sucessful else return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
