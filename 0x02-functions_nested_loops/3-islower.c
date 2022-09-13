#include <stdio.h>

/**
 * _islower - Function that tests for lower case
 * @c: parameter that allows function to return integer value
 *
 * Description: Case of alphabet is tested
 */

int _islower(int c)
{
	char a ='a';
	char b = 'A';
	if (a <= 'z')
	{
		return (1);
	}
	else if (b <= 'Z')
	{
		return (0);
	}
}
