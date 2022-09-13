#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int var[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'}
	_putchar(var);
	return (0);
}

void _putchar(int var[])
{
	int i;
	for (i = 0; i < 8; i++)
	{

		putchar(var[i]);
	}
}
