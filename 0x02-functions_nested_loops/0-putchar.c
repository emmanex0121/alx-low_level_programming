#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char var[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	_putchars(var);
	return (0);
}

void _putchars(char var[])
{
	int i;
	for (i = 0; i < 8; i++)
	{

		putchar(var[i]);
	}
}
