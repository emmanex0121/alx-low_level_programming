#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog struct inside the typedef of dog_t
 * @name: new dog's name
 * @age: new dog's age
 * @owner: New dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	free(ndog);
	return (ndog);
}
