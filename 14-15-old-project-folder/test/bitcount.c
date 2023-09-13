#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to test magic
 *
 * Return: 0 on success
 */
int main()
{
	int count;
	char x = 4;

	for (count = 0; x !=0; x >> 1)
	{
		if (x & 01)
			count++;
	}

	printf("%i", count);
}
