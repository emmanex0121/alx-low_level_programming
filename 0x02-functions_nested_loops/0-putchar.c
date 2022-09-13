#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char var[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	_putchars(9, var);
	return (0);
}

void _putchars(int n, char var[])
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(var[i]);
	}
}
