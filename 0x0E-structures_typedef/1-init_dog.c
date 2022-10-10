#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initializes struct dog
 * @d: struct variable pointer
 * @name: dog name
 * @age: dog age
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
