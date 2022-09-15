#include <stdio.h>


/**
 * _isupper - Tests case
 * @c: integer c
 *
 * Description: Case of Alphabet is tested
 * Return: 1 if true, else o
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
