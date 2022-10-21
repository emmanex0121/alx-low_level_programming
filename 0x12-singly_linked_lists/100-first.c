#include <stdio.h>

/**
 * bef_main - Function that executes before the main
 */

(void) __attribute__ ((constructor)) bef_main()
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
