#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function that prints struct dog
 * @d: pointer to structure dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %p\n", d->name);
	else
		printf("Name: %s\n", d->name);
	if (d->age == '\0')
		printf("Age: %f\n", d->age);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %p\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
