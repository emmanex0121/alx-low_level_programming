#include <stdio.h>
#include "main.h"

/**
 * _isupper - Tests case
 * @c: integer c
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
