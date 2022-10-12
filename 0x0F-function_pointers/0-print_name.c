#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function to print name using function pointers
 * @name: name to be printed
 * @f: pointer to the function that uses the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
