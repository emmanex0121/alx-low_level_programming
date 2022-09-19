#include <stdio.h>

/**
 * int _strlen - Function to print string lenght
 * @*s: Parameter for the string
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
