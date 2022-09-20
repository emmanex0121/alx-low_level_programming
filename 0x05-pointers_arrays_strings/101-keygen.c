#include <stdio.h>
#include <stdlib.h>

void genRand(int size, char chars[]);

/**
 * main - Program to run the random password gen
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	time_t t;
	char pass[] = {};
	char chars[] = "0123456789!@#$%^&*()ABCDEFGHIJKLMOPQRSTUVWXYZabcdefghij
		klmnopqrstuvwxyz";

	srand(time(NULL));
	genRand(15, chars);
	return (0);
}

/**
 * genRand - Function to generate and print random
 * @len: integer parameter
 * @chars: character parameter for array
 */

void genRand(int len, char chars[])
{
	char pass[len];
	int i;

	for (i = 0; i < len; i++)
	{
		pass[i] = chars[rand() % 72];
	}
	printf(pass);
}
