#include <stdio.h>

/**
 * _isalpha - Function that tests for any alphabet
 * @c: parameter that allows function to return integer value
 *
 * Description: Testing for alphabet lower or upper
 * Return: Lorem Ipsium
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
