#include <stdio.h>

/**
 * _isupper - Tests case
 * @c: Integer c
 *
 * Description: Case of Alphabet is tested
 * Return: If true return 1, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else{
		return (0);
	}
}
