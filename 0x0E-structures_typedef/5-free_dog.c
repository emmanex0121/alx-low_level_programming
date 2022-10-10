#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
