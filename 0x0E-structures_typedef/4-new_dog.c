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
	unisigned int nl, ol, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	ndog->name = malloc(n1 * sizeof(char));
	if (ndog-> == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	ndog->owner = malloc(sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		ndog->owner[i] = owner[i];
	return (ndog);
}
