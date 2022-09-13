#include <stdio.h>

/**
 * _islower - Function that tests for lower case
 * @c: parameter that allows function to return integer value
 *
 * Description: Case of alphabet is tested
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return 1;
	}else{
		return 0;
	}

}
