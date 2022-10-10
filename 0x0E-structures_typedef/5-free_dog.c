#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs
 * @d: pointer to structure dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
